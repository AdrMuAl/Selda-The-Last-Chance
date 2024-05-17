extends StaticBody2D


func _ready():
	$opened.visible = false
	$closed.visible = true


func _on_key_chest_opened():
	$opened.visible = true
	$closed.visible = false
	Global.emit_signal("chest_opened")
