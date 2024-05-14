class_name State_Attack extends State
@onready var walk: State = $"../Walk"
@onready var animation_player: AnimationPlayer = $"../../AnimationPlayer"
@onready var attack_anim: AnimationPlayer = $"../../Sprite2D/Attack_Effect/AnimationPlayer"
@onready var idle : State = $"../Idle"
@onready var audio_stream_player_2d : AudioStreamPlayer2D = $"../../Audio/AudioStreamPlayer2D"
@onready var hurt_box : HurtBox = %AttackHurtBox


@export var attack_soud : AudioStream
@export_range(1,20,0.5) var decelerate_speed : float = 5.0
var attacking : bool = false

# Called every frame. 'delta' is the elapsed time since the previous frame.
func enter() -> void:
	player.update_animation("attack")
	attack_anim.play("attack_" + player.anim_direction())
	animation_player.animation_finished.connect(_end_attack)
	
	audio_stream_player_2d.stream = attack_soud
	audio_stream_player_2d.pitch_scale = randf_range(0.9, 1.1)
	audio_stream_player_2d.play()
	
	attacking = true
	
	await get_tree().create_timer(0.075).timeout
	
	hurt_box.monitoring = true
	pass
func exit() -> void:
	animation_player.animation_finished.disconnect(_end_attack)
	attacking = false
	hurt_box.monitoring = false
	pass

func process(_delta : float) -> State:
	player.velocity -= player.velocity * decelerate_speed * _delta
	
	if attacking == false:
		if player.direction == Vector2.ZERO:
			return idle
		else:
			return walk
	return null
	
	
func physics(_delta : float) -> State:
	return null
func handle_input(_event: InputEvent) -> State:
	return null
	
func _end_attack(newAnimName: String) -> void:
	attacking = false
	
	
	
