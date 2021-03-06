// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/server_only/common.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2fserver_5fonly_2fcommon_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2fserver_5fonly_2fcommon_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2fserver_5fonly_2fcommon_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2fserver_5fonly_2fcommon_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fserver_5fonly_2fcommon_2eproto;
class RpcMsg;
class RpcMsgDefaultTypeInternal;
extern RpcMsgDefaultTypeInternal _RpcMsg_default_instance_;
class RpcMsgRsp;
class RpcMsgRspDefaultTypeInternal;
extern RpcMsgRspDefaultTypeInternal _RpcMsgRsp_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::RpcMsg* Arena::CreateMaybeMessage<::RpcMsg>(Arena*);
template<> ::RpcMsgRsp* Arena::CreateMaybeMessage<::RpcMsgRsp>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class RpcMsg :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:RpcMsg) */ {
 public:
  RpcMsg();
  virtual ~RpcMsg();

  RpcMsg(const RpcMsg& from);
  RpcMsg(RpcMsg&& from) noexcept
    : RpcMsg() {
    *this = ::std::move(from);
  }

  inline RpcMsg& operator=(const RpcMsg& from) {
    CopyFrom(from);
    return *this;
  }
  inline RpcMsg& operator=(RpcMsg&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const RpcMsg& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RpcMsg* internal_default_instance() {
    return reinterpret_cast<const RpcMsg*>(
               &_RpcMsg_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RpcMsg& a, RpcMsg& b) {
    a.Swap(&b);
  }
  inline void Swap(RpcMsg* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline RpcMsg* New() const final {
    return CreateMaybeMessage<RpcMsg>(nullptr);
  }

  RpcMsg* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<RpcMsg>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const RpcMsg& from);
  void MergeFrom(const RpcMsg& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RpcMsg* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "RpcMsg";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2fserver_5fonly_2fcommon_2eproto);
    return ::descriptor_table_proto_2fserver_5fonly_2fcommon_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRpcFuncFieldNumber = 2,
    kRpcParamFieldNumber = 3,
    kRpcIdFieldNumber = 1,
  };
  // string rpc_func = 2;
  void clear_rpc_func();
  const std::string& rpc_func() const;
  void set_rpc_func(const std::string& value);
  void set_rpc_func(std::string&& value);
  void set_rpc_func(const char* value);
  void set_rpc_func(const char* value, size_t size);
  std::string* mutable_rpc_func();
  std::string* release_rpc_func();
  void set_allocated_rpc_func(std::string* rpc_func);

  // string rpc_param = 3;
  void clear_rpc_param();
  const std::string& rpc_param() const;
  void set_rpc_param(const std::string& value);
  void set_rpc_param(std::string&& value);
  void set_rpc_param(const char* value);
  void set_rpc_param(const char* value, size_t size);
  std::string* mutable_rpc_param();
  std::string* release_rpc_param();
  void set_allocated_rpc_param(std::string* rpc_param);

  // int32 rpc_id = 1;
  void clear_rpc_id();
  ::PROTOBUF_NAMESPACE_ID::int32 rpc_id() const;
  void set_rpc_id(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:RpcMsg)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr rpc_func_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr rpc_param_;
  ::PROTOBUF_NAMESPACE_ID::int32 rpc_id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2fserver_5fonly_2fcommon_2eproto;
};
// -------------------------------------------------------------------

class RpcMsgRsp :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:RpcMsgRsp) */ {
 public:
  RpcMsgRsp();
  virtual ~RpcMsgRsp();

  RpcMsgRsp(const RpcMsgRsp& from);
  RpcMsgRsp(RpcMsgRsp&& from) noexcept
    : RpcMsgRsp() {
    *this = ::std::move(from);
  }

  inline RpcMsgRsp& operator=(const RpcMsgRsp& from) {
    CopyFrom(from);
    return *this;
  }
  inline RpcMsgRsp& operator=(RpcMsgRsp&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const RpcMsgRsp& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RpcMsgRsp* internal_default_instance() {
    return reinterpret_cast<const RpcMsgRsp*>(
               &_RpcMsgRsp_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(RpcMsgRsp& a, RpcMsgRsp& b) {
    a.Swap(&b);
  }
  inline void Swap(RpcMsgRsp* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline RpcMsgRsp* New() const final {
    return CreateMaybeMessage<RpcMsgRsp>(nullptr);
  }

  RpcMsgRsp* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<RpcMsgRsp>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const RpcMsgRsp& from);
  void MergeFrom(const RpcMsgRsp& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RpcMsgRsp* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "RpcMsgRsp";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2fserver_5fonly_2fcommon_2eproto);
    return ::descriptor_table_proto_2fserver_5fonly_2fcommon_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRpcDataFieldNumber = 2,
    kRpcIdFieldNumber = 1,
  };
  // string rpc_data = 2;
  void clear_rpc_data();
  const std::string& rpc_data() const;
  void set_rpc_data(const std::string& value);
  void set_rpc_data(std::string&& value);
  void set_rpc_data(const char* value);
  void set_rpc_data(const char* value, size_t size);
  std::string* mutable_rpc_data();
  std::string* release_rpc_data();
  void set_allocated_rpc_data(std::string* rpc_data);

  // int32 rpc_id = 1;
  void clear_rpc_id();
  ::PROTOBUF_NAMESPACE_ID::int32 rpc_id() const;
  void set_rpc_id(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:RpcMsgRsp)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr rpc_data_;
  ::PROTOBUF_NAMESPACE_ID::int32 rpc_id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2fserver_5fonly_2fcommon_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RpcMsg

// int32 rpc_id = 1;
inline void RpcMsg::clear_rpc_id() {
  rpc_id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 RpcMsg::rpc_id() const {
  // @@protoc_insertion_point(field_get:RpcMsg.rpc_id)
  return rpc_id_;
}
inline void RpcMsg::set_rpc_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  rpc_id_ = value;
  // @@protoc_insertion_point(field_set:RpcMsg.rpc_id)
}

// string rpc_func = 2;
inline void RpcMsg::clear_rpc_func() {
  rpc_func_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& RpcMsg::rpc_func() const {
  // @@protoc_insertion_point(field_get:RpcMsg.rpc_func)
  return rpc_func_.GetNoArena();
}
inline void RpcMsg::set_rpc_func(const std::string& value) {
  
  rpc_func_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:RpcMsg.rpc_func)
}
inline void RpcMsg::set_rpc_func(std::string&& value) {
  
  rpc_func_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:RpcMsg.rpc_func)
}
inline void RpcMsg::set_rpc_func(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  rpc_func_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:RpcMsg.rpc_func)
}
inline void RpcMsg::set_rpc_func(const char* value, size_t size) {
  
  rpc_func_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:RpcMsg.rpc_func)
}
inline std::string* RpcMsg::mutable_rpc_func() {
  
  // @@protoc_insertion_point(field_mutable:RpcMsg.rpc_func)
  return rpc_func_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* RpcMsg::release_rpc_func() {
  // @@protoc_insertion_point(field_release:RpcMsg.rpc_func)
  
  return rpc_func_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void RpcMsg::set_allocated_rpc_func(std::string* rpc_func) {
  if (rpc_func != nullptr) {
    
  } else {
    
  }
  rpc_func_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), rpc_func);
  // @@protoc_insertion_point(field_set_allocated:RpcMsg.rpc_func)
}

// string rpc_param = 3;
inline void RpcMsg::clear_rpc_param() {
  rpc_param_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& RpcMsg::rpc_param() const {
  // @@protoc_insertion_point(field_get:RpcMsg.rpc_param)
  return rpc_param_.GetNoArena();
}
inline void RpcMsg::set_rpc_param(const std::string& value) {
  
  rpc_param_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:RpcMsg.rpc_param)
}
inline void RpcMsg::set_rpc_param(std::string&& value) {
  
  rpc_param_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:RpcMsg.rpc_param)
}
inline void RpcMsg::set_rpc_param(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  rpc_param_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:RpcMsg.rpc_param)
}
inline void RpcMsg::set_rpc_param(const char* value, size_t size) {
  
  rpc_param_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:RpcMsg.rpc_param)
}
inline std::string* RpcMsg::mutable_rpc_param() {
  
  // @@protoc_insertion_point(field_mutable:RpcMsg.rpc_param)
  return rpc_param_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* RpcMsg::release_rpc_param() {
  // @@protoc_insertion_point(field_release:RpcMsg.rpc_param)
  
  return rpc_param_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void RpcMsg::set_allocated_rpc_param(std::string* rpc_param) {
  if (rpc_param != nullptr) {
    
  } else {
    
  }
  rpc_param_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), rpc_param);
  // @@protoc_insertion_point(field_set_allocated:RpcMsg.rpc_param)
}

// -------------------------------------------------------------------

// RpcMsgRsp

// int32 rpc_id = 1;
inline void RpcMsgRsp::clear_rpc_id() {
  rpc_id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 RpcMsgRsp::rpc_id() const {
  // @@protoc_insertion_point(field_get:RpcMsgRsp.rpc_id)
  return rpc_id_;
}
inline void RpcMsgRsp::set_rpc_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  rpc_id_ = value;
  // @@protoc_insertion_point(field_set:RpcMsgRsp.rpc_id)
}

// string rpc_data = 2;
inline void RpcMsgRsp::clear_rpc_data() {
  rpc_data_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& RpcMsgRsp::rpc_data() const {
  // @@protoc_insertion_point(field_get:RpcMsgRsp.rpc_data)
  return rpc_data_.GetNoArena();
}
inline void RpcMsgRsp::set_rpc_data(const std::string& value) {
  
  rpc_data_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:RpcMsgRsp.rpc_data)
}
inline void RpcMsgRsp::set_rpc_data(std::string&& value) {
  
  rpc_data_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:RpcMsgRsp.rpc_data)
}
inline void RpcMsgRsp::set_rpc_data(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  rpc_data_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:RpcMsgRsp.rpc_data)
}
inline void RpcMsgRsp::set_rpc_data(const char* value, size_t size) {
  
  rpc_data_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:RpcMsgRsp.rpc_data)
}
inline std::string* RpcMsgRsp::mutable_rpc_data() {
  
  // @@protoc_insertion_point(field_mutable:RpcMsgRsp.rpc_data)
  return rpc_data_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* RpcMsgRsp::release_rpc_data() {
  // @@protoc_insertion_point(field_release:RpcMsgRsp.rpc_data)
  
  return rpc_data_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void RpcMsgRsp::set_allocated_rpc_data(std::string* rpc_data) {
  if (rpc_data != nullptr) {
    
  } else {
    
  }
  rpc_data_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), rpc_data);
  // @@protoc_insertion_point(field_set_allocated:RpcMsgRsp.rpc_data)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2fserver_5fonly_2fcommon_2eproto
