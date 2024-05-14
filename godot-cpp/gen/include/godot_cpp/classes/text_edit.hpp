/**************************************************************************/
/*  text_edit.hpp                                                         */
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

#ifndef GODOT_CPP_TEXT_EDIT_HPP
#define GODOT_CPP_TEXT_EDIT_HPP

#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/rect2i.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

namespace godot {

class Callable;
class HScrollBar;
class PopupMenu;
class SyntaxHighlighter;
class Texture2D;
class VScrollBar;

class TextEdit : public Control {
	GDEXTENSION_CLASS(TextEdit, Control)

public:

	enum MenuItems {
		MENU_CUT = 0,
		MENU_COPY = 1,
		MENU_PASTE = 2,
		MENU_CLEAR = 3,
		MENU_SELECT_ALL = 4,
		MENU_UNDO = 5,
		MENU_REDO = 6,
		MENU_SUBMENU_TEXT_DIR = 7,
		MENU_DIR_INHERITED = 8,
		MENU_DIR_AUTO = 9,
		MENU_DIR_LTR = 10,
		MENU_DIR_RTL = 11,
		MENU_DISPLAY_UCC = 12,
		MENU_SUBMENU_INSERT_UCC = 13,
		MENU_INSERT_LRM = 14,
		MENU_INSERT_RLM = 15,
		MENU_INSERT_LRE = 16,
		MENU_INSERT_RLE = 17,
		MENU_INSERT_LRO = 18,
		MENU_INSERT_RLO = 19,
		MENU_INSERT_PDF = 20,
		MENU_INSERT_ALM = 21,
		MENU_INSERT_LRI = 22,
		MENU_INSERT_RLI = 23,
		MENU_INSERT_FSI = 24,
		MENU_INSERT_PDI = 25,
		MENU_INSERT_ZWJ = 26,
		MENU_INSERT_ZWNJ = 27,
		MENU_INSERT_WJ = 28,
		MENU_INSERT_SHY = 29,
		MENU_MAX = 30,
	};

	enum EditAction {
		ACTION_NONE = 0,
		ACTION_TYPING = 1,
		ACTION_BACKSPACE = 2,
		ACTION_DELETE = 3,
	};

	enum SearchFlags {
		SEARCH_MATCH_CASE = 1,
		SEARCH_WHOLE_WORDS = 2,
		SEARCH_BACKWARDS = 4,
	};

	enum CaretType {
		CARET_TYPE_LINE = 0,
		CARET_TYPE_BLOCK = 1,
	};

	enum SelectionMode {
		SELECTION_MODE_NONE = 0,
		SELECTION_MODE_SHIFT = 1,
		SELECTION_MODE_POINTER = 2,
		SELECTION_MODE_WORD = 3,
		SELECTION_MODE_LINE = 4,
	};

	enum LineWrappingMode {
		LINE_WRAPPING_NONE = 0,
		LINE_WRAPPING_BOUNDARY = 1,
	};

	enum GutterType {
		GUTTER_TYPE_STRING = 0,
		GUTTER_TYPE_ICON = 1,
		GUTTER_TYPE_CUSTOM = 2,
	};

	bool has_ime_text() const;
	void set_editable(bool enabled);
	bool is_editable() const;
	void set_text_direction(Control::TextDirection direction);
	Control::TextDirection get_text_direction() const;
	void set_language(const String &language);
	String get_language() const;
	void set_structured_text_bidi_override(TextServer::StructuredTextParser parser);
	TextServer::StructuredTextParser get_structured_text_bidi_override() const;
	void set_structured_text_bidi_override_options(const Array &args);
	Array get_structured_text_bidi_override_options() const;
	void set_tab_size(int32_t size);
	int32_t get_tab_size() const;
	void set_overtype_mode_enabled(bool enabled);
	bool is_overtype_mode_enabled() const;
	void set_context_menu_enabled(bool enabled);
	bool is_context_menu_enabled() const;
	void set_shortcut_keys_enabled(bool enabled);
	bool is_shortcut_keys_enabled() const;
	void set_virtual_keyboard_enabled(bool enabled);
	bool is_virtual_keyboard_enabled() const;
	void set_middle_mouse_paste_enabled(bool enabled);
	bool is_middle_mouse_paste_enabled() const;
	void clear();
	void set_text(const String &text);
	String get_text() const;
	int32_t get_line_count() const;
	void set_placeholder(const String &text);
	String get_placeholder() const;
	void set_line(int32_t line, const String &new_text);
	String get_line(int32_t line) const;
	int32_t get_line_width(int32_t line, int32_t wrap_index = -1) const;
	int32_t get_line_height() const;
	int32_t get_indent_level(int32_t line) const;
	int32_t get_first_non_whitespace_column(int32_t line) const;
	void swap_lines(int32_t from_line, int32_t to_line);
	void insert_line_at(int32_t line, const String &text);
	void insert_text_at_caret(const String &text, int32_t caret_index = -1);
	void remove_text(int32_t from_line, int32_t from_column, int32_t to_line, int32_t to_column);
	int32_t get_last_unhidden_line() const;
	int32_t get_next_visible_line_offset_from(int32_t line, int32_t visible_amount) const;
	Vector2i get_next_visible_line_index_offset_from(int32_t line, int32_t wrap_index, int32_t visible_amount) const;
	void backspace(int32_t caret_index = -1);
	void cut(int32_t caret_index = -1);
	void copy(int32_t caret_index = -1);
	void paste(int32_t caret_index = -1);
	void paste_primary_clipboard(int32_t caret_index = -1);
	void start_action(TextEdit::EditAction action);
	void end_action();
	void begin_complex_operation();
	void end_complex_operation();
	bool has_undo() const;
	bool has_redo() const;
	void undo();
	void redo();
	void clear_undo_history();
	void tag_saved_version();
	uint32_t get_version() const;
	uint32_t get_saved_version() const;
	void set_search_text(const String &search_text);
	void set_search_flags(uint32_t flags);
	Vector2i search(const String &text, uint32_t flags, int32_t from_line, int32_t from_colum) const;
	void set_tooltip_request_func(const Callable &callback);
	Vector2 get_local_mouse_pos() const;
	String get_word_at_pos(const Vector2 &position) const;
	Vector2i get_line_column_at_pos(const Vector2i &position, bool allow_out_of_bounds = true) const;
	Vector2i get_pos_at_line_column(int32_t line, int32_t column) const;
	Rect2i get_rect_at_line_column(int32_t line, int32_t column) const;
	int32_t get_minimap_line_at_pos(const Vector2i &position) const;
	bool is_dragging_cursor() const;
	bool is_mouse_over_selection(bool edges, int32_t caret_index = -1) const;
	void set_caret_type(TextEdit::CaretType type);
	TextEdit::CaretType get_caret_type() const;
	void set_caret_blink_enabled(bool enable);
	bool is_caret_blink_enabled() const;
	void set_caret_blink_interval(double interval);
	double get_caret_blink_interval() const;
	void set_draw_caret_when_editable_disabled(bool enable);
	bool is_drawing_caret_when_editable_disabled() const;
	void set_move_caret_on_right_click_enabled(bool enable);
	bool is_move_caret_on_right_click_enabled() const;
	void set_caret_mid_grapheme_enabled(bool enabled);
	bool is_caret_mid_grapheme_enabled() const;
	void set_multiple_carets_enabled(bool enabled);
	bool is_multiple_carets_enabled() const;
	int32_t add_caret(int32_t line, int32_t col);
	void remove_caret(int32_t caret);
	void remove_secondary_carets();
	void merge_overlapping_carets();
	int32_t get_caret_count() const;
	void add_caret_at_carets(bool below);
	PackedInt32Array get_caret_index_edit_order();
	void adjust_carets_after_edit(int32_t caret, int32_t from_line, int32_t from_col, int32_t to_line, int32_t to_col);
	bool is_caret_visible(int32_t caret_index = 0) const;
	Vector2 get_caret_draw_pos(int32_t caret_index = 0) const;
	void set_caret_line(int32_t line, bool adjust_viewport = true, bool can_be_hidden = true, int32_t wrap_index = 0, int32_t caret_index = 0);
	int32_t get_caret_line(int32_t caret_index = 0) const;
	void set_caret_column(int32_t column, bool adjust_viewport = true, int32_t caret_index = 0);
	int32_t get_caret_column(int32_t caret_index = 0) const;
	int32_t get_caret_wrap_index(int32_t caret_index = 0) const;
	String get_word_under_caret(int32_t caret_index = -1) const;
	void set_selecting_enabled(bool enable);
	bool is_selecting_enabled() const;
	void set_deselect_on_focus_loss_enabled(bool enable);
	bool is_deselect_on_focus_loss_enabled() const;
	void set_drag_and_drop_selection_enabled(bool enable);
	bool is_drag_and_drop_selection_enabled() const;
	void set_selection_mode(TextEdit::SelectionMode mode, int32_t line = -1, int32_t column = -1, int32_t caret_index = 0);
	TextEdit::SelectionMode get_selection_mode() const;
	void select_all();
	void select_word_under_caret(int32_t caret_index = -1);
	void add_selection_for_next_occurrence();
	void select(int32_t from_line, int32_t from_column, int32_t to_line, int32_t to_column, int32_t caret_index = 0);
	bool has_selection(int32_t caret_index = -1) const;
	String get_selected_text(int32_t caret_index = -1);
	int32_t get_selection_line(int32_t caret_index = 0) const;
	int32_t get_selection_column(int32_t caret_index = 0) const;
	int32_t get_selection_from_line(int32_t caret_index = 0) const;
	int32_t get_selection_from_column(int32_t caret_index = 0) const;
	int32_t get_selection_to_line(int32_t caret_index = 0) const;
	int32_t get_selection_to_column(int32_t caret_index = 0) const;
	void deselect(int32_t caret_index = -1);
	void delete_selection(int32_t caret_index = -1);
	void set_line_wrapping_mode(TextEdit::LineWrappingMode mode);
	TextEdit::LineWrappingMode get_line_wrapping_mode() const;
	void set_autowrap_mode(TextServer::AutowrapMode autowrap_mode);
	TextServer::AutowrapMode get_autowrap_mode() const;
	bool is_line_wrapped(int32_t line) const;
	int32_t get_line_wrap_count(int32_t line) const;
	int32_t get_line_wrap_index_at_column(int32_t line, int32_t column) const;
	PackedStringArray get_line_wrapped_text(int32_t line) const;
	void set_smooth_scroll_enabled(bool enable);
	bool is_smooth_scroll_enabled() const;
	VScrollBar *get_v_scroll_bar() const;
	HScrollBar *get_h_scroll_bar() const;
	void set_v_scroll(double value);
	double get_v_scroll() const;
	void set_h_scroll(int32_t value);
	int32_t get_h_scroll() const;
	void set_scroll_past_end_of_file_enabled(bool enable);
	bool is_scroll_past_end_of_file_enabled() const;
	void set_v_scroll_speed(double speed);
	double get_v_scroll_speed() const;
	void set_fit_content_height_enabled(bool enabled);
	bool is_fit_content_height_enabled() const;
	double get_scroll_pos_for_line(int32_t line, int32_t wrap_index = 0) const;
	void set_line_as_first_visible(int32_t line, int32_t wrap_index = 0);
	int32_t get_first_visible_line() const;
	void set_line_as_center_visible(int32_t line, int32_t wrap_index = 0);
	void set_line_as_last_visible(int32_t line, int32_t wrap_index = 0);
	int32_t get_last_full_visible_line() const;
	int32_t get_last_full_visible_line_wrap_index() const;
	int32_t get_visible_line_count() const;
	int32_t get_visible_line_count_in_range(int32_t from_line, int32_t to_line) const;
	int32_t get_total_visible_line_count() const;
	void adjust_viewport_to_caret(int32_t caret_index = 0);
	void center_viewport_to_caret(int32_t caret_index = 0);
	void set_draw_minimap(bool enabled);
	bool is_drawing_minimap() const;
	void set_minimap_width(int32_t width);
	int32_t get_minimap_width() const;
	int32_t get_minimap_visible_lines() const;
	void add_gutter(int32_t at = -1);
	void remove_gutter(int32_t gutter);
	int32_t get_gutter_count() const;
	void set_gutter_name(int32_t gutter, const String &name);
	String get_gutter_name(int32_t gutter) const;
	void set_gutter_type(int32_t gutter, TextEdit::GutterType type);
	TextEdit::GutterType get_gutter_type(int32_t gutter) const;
	void set_gutter_width(int32_t gutter, int32_t width);
	int32_t get_gutter_width(int32_t gutter) const;
	void set_gutter_draw(int32_t gutter, bool draw);
	bool is_gutter_drawn(int32_t gutter) const;
	void set_gutter_clickable(int32_t gutter, bool clickable);
	bool is_gutter_clickable(int32_t gutter) const;
	void set_gutter_overwritable(int32_t gutter, bool overwritable);
	bool is_gutter_overwritable(int32_t gutter) const;
	void merge_gutters(int32_t from_line, int32_t to_line);
	void set_gutter_custom_draw(int32_t column, const Callable &draw_callback);
	int32_t get_total_gutter_width() const;
	void set_line_gutter_metadata(int32_t line, int32_t gutter, const Variant &metadata);
	Variant get_line_gutter_metadata(int32_t line, int32_t gutter) const;
	void set_line_gutter_text(int32_t line, int32_t gutter, const String &text);
	String get_line_gutter_text(int32_t line, int32_t gutter) const;
	void set_line_gutter_icon(int32_t line, int32_t gutter, const Ref<Texture2D> &icon);
	Ref<Texture2D> get_line_gutter_icon(int32_t line, int32_t gutter) const;
	void set_line_gutter_item_color(int32_t line, int32_t gutter, const Color &color);
	Color get_line_gutter_item_color(int32_t line, int32_t gutter) const;
	void set_line_gutter_clickable(int32_t line, int32_t gutter, bool clickable);
	bool is_line_gutter_clickable(int32_t line, int32_t gutter) const;
	void set_line_background_color(int32_t line, const Color &color);
	Color get_line_background_color(int32_t line) const;
	void set_syntax_highlighter(const Ref<SyntaxHighlighter> &syntax_highlighter);
	Ref<SyntaxHighlighter> get_syntax_highlighter() const;
	void set_highlight_current_line(bool enabled);
	bool is_highlight_current_line_enabled() const;
	void set_highlight_all_occurrences(bool enabled);
	bool is_highlight_all_occurrences_enabled() const;
	bool get_draw_control_chars() const;
	void set_draw_control_chars(bool enabled);
	void set_draw_tabs(bool enabled);
	bool is_drawing_tabs() const;
	void set_draw_spaces(bool enabled);
	bool is_drawing_spaces() const;
	PopupMenu *get_menu() const;
	bool is_menu_visible() const;
	void menu_option(int32_t option);
	virtual void _handle_unicode_input(int32_t unicode_char, int32_t caret_index);
	virtual void _backspace(int32_t caret_index);
	virtual void _cut(int32_t caret_index);
	virtual void _copy(int32_t caret_index);
	virtual void _paste(int32_t caret_index);
	virtual void _paste_primary_clipboard(int32_t caret_index);
protected:
	template <class T, class B>
	static void register_virtuals() {
		Control::register_virtuals<T, B>();
		if constexpr (!std::is_same_v<decltype(&B::_handle_unicode_input),decltype(&T::_handle_unicode_input)>) {
			BIND_VIRTUAL_METHOD(T, _handle_unicode_input);
		}
		if constexpr (!std::is_same_v<decltype(&B::_backspace),decltype(&T::_backspace)>) {
			BIND_VIRTUAL_METHOD(T, _backspace);
		}
		if constexpr (!std::is_same_v<decltype(&B::_cut),decltype(&T::_cut)>) {
			BIND_VIRTUAL_METHOD(T, _cut);
		}
		if constexpr (!std::is_same_v<decltype(&B::_copy),decltype(&T::_copy)>) {
			BIND_VIRTUAL_METHOD(T, _copy);
		}
		if constexpr (!std::is_same_v<decltype(&B::_paste),decltype(&T::_paste)>) {
			BIND_VIRTUAL_METHOD(T, _paste);
		}
		if constexpr (!std::is_same_v<decltype(&B::_paste_primary_clipboard),decltype(&T::_paste_primary_clipboard)>) {
			BIND_VIRTUAL_METHOD(T, _paste_primary_clipboard);
		}
	}

public:

};

} // namespace godot

VARIANT_ENUM_CAST(TextEdit::MenuItems);
VARIANT_ENUM_CAST(TextEdit::EditAction);
VARIANT_ENUM_CAST(TextEdit::SearchFlags);
VARIANT_ENUM_CAST(TextEdit::CaretType);
VARIANT_ENUM_CAST(TextEdit::SelectionMode);
VARIANT_ENUM_CAST(TextEdit::LineWrappingMode);
VARIANT_ENUM_CAST(TextEdit::GutterType);

#endif // ! GODOT_CPP_TEXT_EDIT_HPP