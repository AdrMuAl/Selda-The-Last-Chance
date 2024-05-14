/**************************************************************************/
/*  gltf_document.hpp                                                     */
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

#ifndef GODOT_CPP_GLTF_DOCUMENT_HPP
#define GODOT_CPP_GLTF_DOCUMENT_HPP

#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/string.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

namespace godot {

class GLTFDocumentExtension;
class GLTFState;
class Node;

class GLTFDocument : public Resource {
	GDEXTENSION_CLASS(GLTFDocument, Resource)

public:

	enum RootNodeMode {
		ROOT_NODE_MODE_SINGLE_ROOT = 0,
		ROOT_NODE_MODE_KEEP_ROOT = 1,
		ROOT_NODE_MODE_MULTI_ROOT = 2,
	};

	Error append_from_file(const String &path, const Ref<GLTFState> &state, uint32_t flags = 0, const String &base_path = String());
	Error append_from_buffer(const PackedByteArray &bytes, const String &base_path, const Ref<GLTFState> &state, uint32_t flags = 0);
	Error append_from_scene(Node *node, const Ref<GLTFState> &state, uint32_t flags = 0);
	Node *generate_scene(const Ref<GLTFState> &state, double bake_fps = 30, bool trimming = false, bool remove_immutable_tracks = true);
	PackedByteArray generate_buffer(const Ref<GLTFState> &state);
	Error write_to_filesystem(const Ref<GLTFState> &state, const String &path);
	void set_image_format(const String &image_format);
	String get_image_format() const;
	void set_lossy_quality(double lossy_quality);
	double get_lossy_quality() const;
	void set_root_node_mode(GLTFDocument::RootNodeMode root_node_mode);
	GLTFDocument::RootNodeMode get_root_node_mode() const;
	static void register_gltf_document_extension(const Ref<GLTFDocumentExtension> &extension, bool first_priority = false);
	static void unregister_gltf_document_extension(const Ref<GLTFDocumentExtension> &extension);
protected:
	template <class T, class B>
	static void register_virtuals() {
		Resource::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

VARIANT_ENUM_CAST(GLTFDocument::RootNodeMode);

#endif // ! GODOT_CPP_GLTF_DOCUMENT_HPP