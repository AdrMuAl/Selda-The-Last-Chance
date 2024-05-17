extends StaticBody2D

signal jar_broken

func _ready():
	$Area2D.connect("body_entered", Callable(self, "_on_body_entered"))

func _on_area_2d_body_entered(body):
	print("Body entered: ", body)
	if body.is_in_group("player_attack"):  # Asegúrate de que el jugador esté en este grupo cuando ataque
		print("Player attack detected")
		break_jar()
func break_jar():
	$Sprite2D.visible = false  # Oculta el sprite del jarrón
	emit_signal("jar_broken")  # Emite la señal de que el jarrón se ha roto
	if Global.player_health < Global.max_health:
		Global.player_health = min(Global.player_health + 20, Global.max_health)
		Global.emit_signal("health_changed", Global.player_health)
		print("Player health increased to ", Global.player_health)



