extends CharacterBody2D

const speed = 100
var current_dir = "none"

var enemy_inattack_range = false
var enemy_attack_cooldown = true

var health = 100
var player_alive = true

var attack_ip = false
var defend_ip = false

func _ready():
	$Player_sprite.play("idle_right")

func _physics_process(delta):
	player_movement(delta)
	attack()
	defend()
	update_health()
	
	if health <= 0:
		player_alive = false
		health = 0
		self.queue_free()

func player_movement(delta):
	if Input.is_key_pressed(KEY_D) or Input.is_action_pressed("ui_right"):
		current_dir = "right"
		play_anim(1)
		velocity.x = speed
		velocity.y = 0
	elif Input.is_key_pressed(KEY_A) or Input.is_action_pressed("ui_left"):
		current_dir = "left"
		play_anim(1)
		velocity.x = -speed
		velocity.y = 0
	elif Input.is_key_pressed(KEY_S) or Input.is_action_pressed("ui_down"):
		current_dir = "down"
		play_anim(1)
		velocity.y = speed
		velocity.x = 0
	elif Input.is_key_pressed(KEY_W) or Input.is_action_pressed("ui_up"):
		current_dir = "up"
		play_anim(1)
		velocity.y = -speed
		velocity.x = 0
	else:
		play_anim(0)
		velocity.x = 0
		velocity.y = 0
		
	move_and_slide()

func play_anim(movement):
	var dir = current_dir
	var anim = $Player_sprite
	
	if dir == "right":
		anim.flip_h = false
		if movement == 1:
			anim.play("walk_right")
		elif movement == 0:
			if attack_ip == false && defend_ip == false:
				anim.play("idle_right")
			
	if dir == "left":
		anim.flip_h = false
		if movement == 1:
			anim.play("walk_left")
		elif movement == 0:
			if attack_ip == false && defend_ip == false:
				anim.play("idle_left")
			
	if dir == "down":
		anim.flip_h = false
		if movement == 1:
			anim.play("walk_down")
		elif movement == 0:
			if attack_ip == false && defend_ip == false:
				anim.play("idle_down")
			
	if dir == "up":
		anim.flip_h = false
		if movement == 1:
			anim.play("walk_up")
		elif movement == 0:
			if attack_ip == false && defend_ip == false:
				anim.play("idle_up")

func attack():
	var dir = current_dir
	
	if Input.is_action_just_pressed("attack"):
		Global.player_current_attack = true
		attack_ip = true
		if dir == "right":
			$Player_sprite.flip_h = false
			$Player_sprite.play("sword_right")
			$Sword_timer.start()
		if dir == "left":
			$Player_sprite.flip_h = false
			$Player_sprite.play("sword_left")
			$Sword_timer.start()
		if dir == "up":
			$Player_sprite.flip_h = false
			$Player_sprite.play("sword_up")
			$Sword_timer.start()
		if dir == "down":
			$Player_sprite.flip_h = false
			$Player_sprite.play("sword_down")
			$Sword_timer.start()

func _on_sword_timer_timeout():
	$Sword_timer.stop()
	Global.player_current_attack = false
	attack_ip = false
	
func defend():
	var dir = current_dir
	
	if Input.is_action_just_pressed("defend"):
		Global.player_current_defend = true
		defend_ip = true
		if dir == "right":
			$Player_sprite.flip_h = false
			$Player_sprite.play("shield_right")
			$Shield_timer.start()
		if dir == "left":
			$Player_sprite.flip_h = false
			$Player_sprite.play("shield_left")
			$Shield_timer.start()
		if dir == "up":
			$Player_sprite.flip_h = false
			$Player_sprite.play("shield_up")
			$Shield_timer.start()
		if dir == "down":
			$Player_sprite.flip_h = false
			$Player_sprite.play("shield_down")
			$Shield_timer.start()

func _on_shield_timer_timeout():
	$Shield_timer.stop()
	Global.player_current_defend = false
	defend_ip = false

func update_health():
	var healthbar = $health_bar_p
	healthbar.value = health

func player():
	pass

func _on_player_hitbox_body_entered(body):
	if body.has_method("enemy"):
		enemy_inattack_range = true

func _on_player_hitbox_body_exited(body):
	if body.has_method("enemy"):
		enemy_inattack_range = false

func enemy_attack():
	if enemy_inattack_range and enemy_attack_cooldown == true:
		health = health - 20
		enemy_attack_cooldown = false
		$Attack_cd.start()
		

func _on_attack_cd_timeout():
	enemy_attack_cooldown = true
