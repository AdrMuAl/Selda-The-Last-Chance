/**************************************************************************/
/*  item_list.hpp                                                         */
/**************************************************************************/
/*                         This file is part of:                          */
/*                             GODOT ENGINE                               */
/*                        https://godotengine.org                         */
/**************************************************************************/
/* Copyright (c) 2014-present Godot Engine contributors (see AUTHORS.md). */
/* Copyright (c) 2007-2014 Juan Linietsky, Ariel Manzur.                  */
/*                                                                        */
/* Permission is hereby granted, free of charge, to any person obtaining  */
/* a copy of this software and associated documentation files (the        */
/* "Software"), to deal in the Software without restriction, including    */
/* without limitation the rights to use, copy, modify, merge, publish,    */
/* distribute, sublicense, and/or sell copies of the Software, and to     */
/* permit persons to whom the Software is furnished to do so, subject to  */
/* the following conditions:                                              */
/*                                                                        */
/* The above copyright notice and this permission notice shall be         */
/* included in all copies or substantial portions of the Software.        */
/*                                                                        */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,        */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF     */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. */
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY   */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,   */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE      */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                 */
/**************************************************************************/

// THIS FILE IS GENERATED. EDITS WILL BE LOST.

#ifndef GODOT_CPP_ITEM_LIST_HPP
#define GODOT_CPP_ITEM_LIST_HPP

#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2i.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

namespace godot {

class VScrollBar;
struct Vector2;

class ItemList : public Control {
	GDEXTENSION_CLASS(ItemList, Control)

public:

	enum IconMode {
		ICON_MODE_TOP = 0,
		ICON_MODE_LEFT = 1,
	};

	enum SelectMode {
		SELECT_SINGLE = 0,
		SELECT_MULTI = 1,
	};

	int32_t add_item(const String &text, const Ref<Texture2D> &icon = nullptr, bool selectable = true);
	int32_t add_icon_item(const Ref<Texture2D> &icon, bool selectable = true);
	void set_item_text(int32_t idx, const String &text);
	String get_item_text(int32_t idx) const;
	void set_item_icon(int32_t idx, const Ref<Texture2D> &icon);
	Ref<Texture2D> get_item_icon(int32_t idx) const;
	void set_item_text_direction(int32_t idx, Control::TextDirection direction);
	Control::TextDirection get_item_text_direction(int32_t idx) const;
	void set_item_language(int32_t idx, const String &language);
	String get_item_language(int32_t idx) const;
	void set_item_icon_transposed(int32_t idx, bool transposed);
	bool is_item_icon_transposed(int32_t idx) const;
	void set_item_icon_region(int32_t idx, const Rect2 &rect);
	Rect2 get_item_icon_region(int32_t idx) const;
	void set_item_icon_modulate(int32_t idx, const Color &modulate);
	Color get_item_icon_modulate(int32_t idx) const;
	void set_item_selectable(int32_t idx, bool selectable);
	bool is_item_selectable(int32_t idx) const;
	void set_item_disabled(int32_t idx, bool disabled);
	bool is_item_disabled(int32_t idx) const;
	void set_item_metadata(int32_t idx, const Variant &metadata);
	Variant get_item_metadata(int32_t idx) const;
	void set_item_custom_bg_color(int32_t idx, const Color &custom_bg_color);
	Color get_item_custom_bg_color(int32_t idx) const;
	void set_item_custom_fg_color(int32_t idx, const Color &custom_fg_color);
	Color get_item_custom_fg_color(int32_t idx) const;
	Rect2 get_item_rect(int32_t idx, bool expand = true) const;
	void set_item_tooltip_enabled(int32_t idx, bool enable);
	bool is_item_tooltip_enabled(int32_t idx) const;
	void set_item_tooltip(int32_t idx, const String &tooltip);
	String get_item_tooltip(int32_t idx) const;
	void select(int32_t idx, bool single = true);
	void deselect(int32_t idx);
	void deselect_all();
	bool is_selected(int32_t idx) const;
	PackedInt32Array get_selected_items();
	void move_item(int32_t from_idx, int32_t to_idx);
	void set_item_count(int32_t count);
	int32_t get_item_count() const;
	void remove_item(int32_t idx);
	void clear();
	void sort_items_by_text();
	void set_fixed_column_width(int32_t width);
	int32_t get_fixed_column_width() const;
	void set_same_column_width(bool enable);
	bool is_same_column_width() const;
	void set_max_text_lines(int32_t lines);
	int32_t get_max_text_lines() const;
	void set_max_columns(int32_t amount);
	int32_t get_max_columns() const;
	void set_select_mode(ItemList::SelectMode mode);
	ItemList::SelectMode get_select_mode() const;
	void set_icon_mode(ItemList::IconMode mode);
	ItemList::IconMode get_icon_mode() const;
	void set_fixed_icon_size(const Vector2i &size);
	Vector2i get_fixed_icon_size() const;
	void set_icon_scale(double scale);
	double get_icon_scale() const;
	void set_allow_rmb_select(bool allow);
	bool get_allow_rmb_select() const;
	void set_allow_reselect(bool allow);
	bool get_allow_reselect() const;
	void set_allow_search(bool allow);
	bool get_allow_search() const;
	void set_auto_height(bool enable);
	bool has_auto_height() const;
	bool is_anything_selected();
	int32_t get_item_at_position(const Vector2 &position, bool exact = false) const;
	void ensure_current_is_visible();
	VScrollBar *get_v_scroll_bar();
	void set_text_overrun_behavior(TextServer::OverrunBehavior overrun_behavior);
	TextServer::OverrunBehavior get_text_overrun_behavior() const;
	void force_update_list_size();
protected:
	template <class T, class B>
	static void register_virtuals() {
		Control::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

VARIANT_ENUM_CAST(ItemList::IconMode);
VARIANT_ENUM_CAST(ItemList::SelectMode);

#endif // ! GODOT_CPP_ITEM_LIST_HPP