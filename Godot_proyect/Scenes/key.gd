extends StaticBody2D

signal chest_opened
var key_taken = false
var in_chest_zone = false

func _on_area_2d_body_entered(body: PhysicsBody2D):
	if key_taken == false:
		key_taken = true
		$Sprite2D.queue_free()

func _process(delta):
	if key_taken == true:
		if in_chest_zone == true:
			if Input.is_action_just_pressed("ui_accept"):
				print("chest open")
				emit_signal("chest_opened")
		

func _on_chest_zone_body_entered(body : PhysicsBody2D):
	in_chest_zone = true
	print( in_chest_zone )

func _on_chest_zone_body_exited(body):
	in_chest_zone = false
