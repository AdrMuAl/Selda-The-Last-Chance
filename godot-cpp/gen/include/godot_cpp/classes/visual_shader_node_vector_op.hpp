/**************************************************************************/
/*  visual_shader_node_vector_op.hpp                                      */
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

#ifndef GODOT_CPP_VISUAL_SHADER_NODE_VECTOR_OP_HPP
#define GODOT_CPP_VISUAL_SHADER_NODE_VECTOR_OP_HPP

#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/visual_shader_node_vector_base.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

namespace godot {

class VisualShaderNodeVectorOp : public VisualShaderNodeVectorBase {
	GDEXTENSION_CLASS(VisualShaderNodeVectorOp, VisualShaderNodeVectorBase)

public:

	enum Operator {
		OP_ADD = 0,
		OP_SUB = 1,
		OP_MUL = 2,
		OP_DIV = 3,
		OP_MOD = 4,
		OP_POW = 5,
		OP_MAX = 6,
		OP_MIN = 7,
		OP_CROSS = 8,
		OP_ATAN2 = 9,
		OP_REFLECT = 10,
		OP_STEP = 11,
		OP_ENUM_SIZE = 12,
	};

	void set_operator(VisualShaderNodeVectorOp::Operator op);
	VisualShaderNodeVectorOp::Operator get_operator() const;
protected:
	template <class T, class B>
	static void register_virtuals() {
		VisualShaderNodeVectorBase::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

VARIANT_ENUM_CAST(VisualShaderNodeVectorOp::Operator);

#endif // ! GODOT_CPP_VISUAL_SHADER_NODE_VECTOR_OP_HPP