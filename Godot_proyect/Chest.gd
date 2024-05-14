extends AnimatedSprite2D

var player = null



func _on_open_chest_area_body_entered(body):
	player = body
	

func _on_open_chest_area_body_exited(body):
	player = null


