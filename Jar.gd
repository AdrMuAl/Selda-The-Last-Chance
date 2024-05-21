extends StaticBody2D

func _ready():
	pass
	
func _process(delta):
	pass

func _on_hitbox_area_entered(area):
	if area.name == "Player_hitbox":
		$anim.play("destroy")
		await $anim.animation_finished
		queue_free()

