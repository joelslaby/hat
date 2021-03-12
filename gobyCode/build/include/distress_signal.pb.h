// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: distress_signal.proto

#ifndef PROTOBUF_INCLUDED_distress_5fsignal_2eproto
#define PROTOBUF_INCLUDED_distress_5fsignal_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "dccl/option_extensions.pb.h"
#include <boost/units/quantity.hpp>
#include <boost/units/absolute.hpp>
#include <boost/units/dimensionless_type.hpp>
#include <boost/units/make_scaled_unit.hpp>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_distress_5fsignal_2eproto 

namespace protobuf_distress_5fsignal_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_distress_5fsignal_2eproto
namespace hat {
namespace protobuf {
class DistressSignal;
class DistressSignalDefaultTypeInternal;
extern DistressSignalDefaultTypeInternal _DistressSignal_default_instance_;
}  // namespace protobuf
}  // namespace hat
namespace google {
namespace protobuf {
template<> ::hat::protobuf::DistressSignal* Arena::CreateMaybeMessage<::hat::protobuf::DistressSignal>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace hat {
namespace protobuf {

enum DistressSignal_SwimmerState {
  DistressSignal_SwimmerState_SAFE = 1,
  DistressSignal_SwimmerState_DISTRESSED = 2
};
bool DistressSignal_SwimmerState_IsValid(int value);
const DistressSignal_SwimmerState DistressSignal_SwimmerState_SwimmerState_MIN = DistressSignal_SwimmerState_SAFE;
const DistressSignal_SwimmerState DistressSignal_SwimmerState_SwimmerState_MAX = DistressSignal_SwimmerState_DISTRESSED;
const int DistressSignal_SwimmerState_SwimmerState_ARRAYSIZE = DistressSignal_SwimmerState_SwimmerState_MAX + 1;

const ::google::protobuf::EnumDescriptor* DistressSignal_SwimmerState_descriptor();
inline const ::std::string& DistressSignal_SwimmerState_Name(DistressSignal_SwimmerState value) {
  return ::google::protobuf::internal::NameOfEnum(
    DistressSignal_SwimmerState_descriptor(), value);
}
inline bool DistressSignal_SwimmerState_Parse(
    const ::std::string& name, DistressSignal_SwimmerState* value) {
  return ::google::protobuf::internal::ParseNamedEnum<DistressSignal_SwimmerState>(
    DistressSignal_SwimmerState_descriptor(), name, value);
}
// ===================================================================

class DistressSignal : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:hat.protobuf.DistressSignal) */ {
 public:
  DistressSignal();
  virtual ~DistressSignal();

  DistressSignal(const DistressSignal& from);

  inline DistressSignal& operator=(const DistressSignal& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  DistressSignal(DistressSignal&& from) noexcept
    : DistressSignal() {
    *this = ::std::move(from);
  }

  inline DistressSignal& operator=(DistressSignal&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const DistressSignal& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DistressSignal* internal_default_instance() {
    return reinterpret_cast<const DistressSignal*>(
               &_DistressSignal_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(DistressSignal* other);
  friend void swap(DistressSignal& a, DistressSignal& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline DistressSignal* New() const final {
    return CreateMaybeMessage<DistressSignal>(NULL);
  }

  DistressSignal* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<DistressSignal>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const DistressSignal& from);
  void MergeFrom(const DistressSignal& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(DistressSignal* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef DistressSignal_SwimmerState SwimmerState;
  static const SwimmerState SAFE =
    DistressSignal_SwimmerState_SAFE;
  static const SwimmerState DISTRESSED =
    DistressSignal_SwimmerState_DISTRESSED;
  static inline bool SwimmerState_IsValid(int value) {
    return DistressSignal_SwimmerState_IsValid(value);
  }
  static const SwimmerState SwimmerState_MIN =
    DistressSignal_SwimmerState_SwimmerState_MIN;
  static const SwimmerState SwimmerState_MAX =
    DistressSignal_SwimmerState_SwimmerState_MAX;
  static const int SwimmerState_ARRAYSIZE =
    DistressSignal_SwimmerState_SwimmerState_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  SwimmerState_descriptor() {
    return DistressSignal_SwimmerState_descriptor();
  }
  static inline const ::std::string& SwimmerState_Name(SwimmerState value) {
    return DistressSignal_SwimmerState_Name(value);
  }
  static inline bool SwimmerState_Parse(const ::std::string& name,
      SwimmerState* value) {
    return DistressSignal_SwimmerState_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required uint32 tag_id = 2 [(.dccl.field) = {
  bool has_tag_id() const;
  void clear_tag_id();
  static const int kTagIdFieldNumber = 2;
  ::google::protobuf::uint32 tag_id() const;
  void set_tag_id(::google::protobuf::uint32 value);

  // required .hat.protobuf.DistressSignal.SwimmerState state = 1;
  bool has_state() const;
  void clear_state();
  static const int kStateFieldNumber = 1;
  ::hat::protobuf::DistressSignal_SwimmerState state() const;
  void set_state(::hat::protobuf::DistressSignal_SwimmerState value);

  enum DCCLParameters { DCCL_ID = 124,  DCCL_MAX_BYTES = 32 };
  // @@protoc_insertion_point(class_scope:hat.protobuf.DistressSignal)
 private:
  void set_has_state();
  void clear_has_state();
  void set_has_tag_id();
  void clear_has_tag_id();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::uint32 tag_id_;
  int state_;
  friend struct ::protobuf_distress_5fsignal_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// DistressSignal

// required .hat.protobuf.DistressSignal.SwimmerState state = 1;
inline bool DistressSignal::has_state() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DistressSignal::set_has_state() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DistressSignal::clear_has_state() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DistressSignal::clear_state() {
  state_ = 1;
  clear_has_state();
}
inline ::hat::protobuf::DistressSignal_SwimmerState DistressSignal::state() const {
  // @@protoc_insertion_point(field_get:hat.protobuf.DistressSignal.state)
  return static_cast< ::hat::protobuf::DistressSignal_SwimmerState >(state_);
}
inline void DistressSignal::set_state(::hat::protobuf::DistressSignal_SwimmerState value) {
  assert(::hat::protobuf::DistressSignal_SwimmerState_IsValid(value));
  set_has_state();
  state_ = value;
  // @@protoc_insertion_point(field_set:hat.protobuf.DistressSignal.state)
}

// required uint32 tag_id = 2 [(.dccl.field) = {
inline bool DistressSignal::has_tag_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DistressSignal::set_has_tag_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DistressSignal::clear_has_tag_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DistressSignal::clear_tag_id() {
  tag_id_ = 0u;
  clear_has_tag_id();
}
inline ::google::protobuf::uint32 DistressSignal::tag_id() const {
  // @@protoc_insertion_point(field_get:hat.protobuf.DistressSignal.tag_id)
  return tag_id_;
}
inline void DistressSignal::set_tag_id(::google::protobuf::uint32 value) {
  set_has_tag_id();
  tag_id_ = value;
  // @@protoc_insertion_point(field_set:hat.protobuf.DistressSignal.tag_id)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace hat

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::hat::protobuf::DistressSignal_SwimmerState> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::hat::protobuf::DistressSignal_SwimmerState>() {
  return ::hat::protobuf::DistressSignal_SwimmerState_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_distress_5fsignal_2eproto
