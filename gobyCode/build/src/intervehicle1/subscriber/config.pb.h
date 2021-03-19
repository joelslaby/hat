// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: config.proto

#ifndef PROTOBUF_INCLUDED_config_2eproto
#define PROTOBUF_INCLUDED_config_2eproto

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
#include <google/protobuf/unknown_field_set.h>
#include "goby/middleware/protobuf/app_config.pb.h"
#include "goby/zeromq/protobuf/interprocess_config.pb.h"
#include <boost/units/quantity.hpp>
#include <boost/units/absolute.hpp>
#include <boost/units/dimensionless_type.hpp>
#include <boost/units/make_scaled_unit.hpp>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_config_2eproto 

namespace protobuf_config_2eproto {
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
}  // namespace protobuf_config_2eproto
namespace goby3_course {
namespace config {
class Subscriber;
class SubscriberDefaultTypeInternal;
extern SubscriberDefaultTypeInternal _Subscriber_default_instance_;
}  // namespace config
}  // namespace goby3_course
namespace google {
namespace protobuf {
template<> ::goby3_course::config::Subscriber* Arena::CreateMaybeMessage<::goby3_course::config::Subscriber>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace goby3_course {
namespace config {

// ===================================================================

class Subscriber : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:goby3_course.config.Subscriber) */ {
 public:
  Subscriber();
  virtual ~Subscriber();

  Subscriber(const Subscriber& from);

  inline Subscriber& operator=(const Subscriber& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Subscriber(Subscriber&& from) noexcept
    : Subscriber() {
    *this = ::std::move(from);
  }

  inline Subscriber& operator=(Subscriber&& from) noexcept {
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
  static const Subscriber& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Subscriber* internal_default_instance() {
    return reinterpret_cast<const Subscriber*>(
               &_Subscriber_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Subscriber* other);
  friend void swap(Subscriber& a, Subscriber& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Subscriber* New() const final {
    return CreateMaybeMessage<Subscriber>(NULL);
  }

  Subscriber* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Subscriber>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Subscriber& from);
  void MergeFrom(const Subscriber& from);
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
  void InternalSwap(Subscriber* other);
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

  // accessors -------------------------------------------------------

  // optional .goby.middleware.protobuf.AppConfig app = 1;
  bool has_app() const;
  void clear_app();
  static const int kAppFieldNumber = 1;
  private:
  const ::goby::middleware::protobuf::AppConfig& _internal_app() const;
  public:
  const ::goby::middleware::protobuf::AppConfig& app() const;
  ::goby::middleware::protobuf::AppConfig* release_app();
  ::goby::middleware::protobuf::AppConfig* mutable_app();
  void set_allocated_app(::goby::middleware::protobuf::AppConfig* app);

  // optional .goby.zeromq.protobuf.InterProcessPortalConfig interprocess = 2;
  bool has_interprocess() const;
  void clear_interprocess();
  static const int kInterprocessFieldNumber = 2;
  private:
  const ::goby::zeromq::protobuf::InterProcessPortalConfig& _internal_interprocess() const;
  public:
  const ::goby::zeromq::protobuf::InterProcessPortalConfig& interprocess() const;
  ::goby::zeromq::protobuf::InterProcessPortalConfig* release_interprocess();
  ::goby::zeromq::protobuf::InterProcessPortalConfig* mutable_interprocess();
  void set_allocated_interprocess(::goby::zeromq::protobuf::InterProcessPortalConfig* interprocess);

  // @@protoc_insertion_point(class_scope:goby3_course.config.Subscriber)
 private:
  void set_has_app();
  void clear_has_app();
  void set_has_interprocess();
  void clear_has_interprocess();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::goby::middleware::protobuf::AppConfig* app_;
  ::goby::zeromq::protobuf::InterProcessPortalConfig* interprocess_;
  friend struct ::protobuf_config_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Subscriber

// optional .goby.middleware.protobuf.AppConfig app = 1;
inline bool Subscriber::has_app() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Subscriber::set_has_app() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Subscriber::clear_has_app() {
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::goby::middleware::protobuf::AppConfig& Subscriber::_internal_app() const {
  return *app_;
}
inline const ::goby::middleware::protobuf::AppConfig& Subscriber::app() const {
  const ::goby::middleware::protobuf::AppConfig* p = app_;
  // @@protoc_insertion_point(field_get:goby3_course.config.Subscriber.app)
  return p != NULL ? *p : *reinterpret_cast<const ::goby::middleware::protobuf::AppConfig*>(
      &::goby::middleware::protobuf::_AppConfig_default_instance_);
}
inline ::goby::middleware::protobuf::AppConfig* Subscriber::release_app() {
  // @@protoc_insertion_point(field_release:goby3_course.config.Subscriber.app)
  clear_has_app();
  ::goby::middleware::protobuf::AppConfig* temp = app_;
  app_ = NULL;
  return temp;
}
inline ::goby::middleware::protobuf::AppConfig* Subscriber::mutable_app() {
  set_has_app();
  if (app_ == NULL) {
    auto* p = CreateMaybeMessage<::goby::middleware::protobuf::AppConfig>(GetArenaNoVirtual());
    app_ = p;
  }
  // @@protoc_insertion_point(field_mutable:goby3_course.config.Subscriber.app)
  return app_;
}
inline void Subscriber::set_allocated_app(::goby::middleware::protobuf::AppConfig* app) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(app_);
  }
  if (app) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      app = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, app, submessage_arena);
    }
    set_has_app();
  } else {
    clear_has_app();
  }
  app_ = app;
  // @@protoc_insertion_point(field_set_allocated:goby3_course.config.Subscriber.app)
}

// optional .goby.zeromq.protobuf.InterProcessPortalConfig interprocess = 2;
inline bool Subscriber::has_interprocess() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Subscriber::set_has_interprocess() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Subscriber::clear_has_interprocess() {
  _has_bits_[0] &= ~0x00000002u;
}
inline const ::goby::zeromq::protobuf::InterProcessPortalConfig& Subscriber::_internal_interprocess() const {
  return *interprocess_;
}
inline const ::goby::zeromq::protobuf::InterProcessPortalConfig& Subscriber::interprocess() const {
  const ::goby::zeromq::protobuf::InterProcessPortalConfig* p = interprocess_;
  // @@protoc_insertion_point(field_get:goby3_course.config.Subscriber.interprocess)
  return p != NULL ? *p : *reinterpret_cast<const ::goby::zeromq::protobuf::InterProcessPortalConfig*>(
      &::goby::zeromq::protobuf::_InterProcessPortalConfig_default_instance_);
}
inline ::goby::zeromq::protobuf::InterProcessPortalConfig* Subscriber::release_interprocess() {
  // @@protoc_insertion_point(field_release:goby3_course.config.Subscriber.interprocess)
  clear_has_interprocess();
  ::goby::zeromq::protobuf::InterProcessPortalConfig* temp = interprocess_;
  interprocess_ = NULL;
  return temp;
}
inline ::goby::zeromq::protobuf::InterProcessPortalConfig* Subscriber::mutable_interprocess() {
  set_has_interprocess();
  if (interprocess_ == NULL) {
    auto* p = CreateMaybeMessage<::goby::zeromq::protobuf::InterProcessPortalConfig>(GetArenaNoVirtual());
    interprocess_ = p;
  }
  // @@protoc_insertion_point(field_mutable:goby3_course.config.Subscriber.interprocess)
  return interprocess_;
}
inline void Subscriber::set_allocated_interprocess(::goby::zeromq::protobuf::InterProcessPortalConfig* interprocess) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(interprocess_);
  }
  if (interprocess) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      interprocess = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, interprocess, submessage_arena);
    }
    set_has_interprocess();
  } else {
    clear_has_interprocess();
  }
  interprocess_ = interprocess;
  // @@protoc_insertion_point(field_set_allocated:goby3_course.config.Subscriber.interprocess)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace config
}  // namespace goby3_course

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_config_2eproto