// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: datastore.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_datastore_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_datastore_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021011 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_bases.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_datastore_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_datastore_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_datastore_2eproto;
namespace wordcount {
class Request;
struct RequestDefaultTypeInternal;
extern RequestDefaultTypeInternal _Request_default_instance_;
class Response;
struct ResponseDefaultTypeInternal;
extern ResponseDefaultTypeInternal _Response_default_instance_;
}  // namespace wordcount
PROTOBUF_NAMESPACE_OPEN
template<> ::wordcount::Request* Arena::CreateMaybeMessage<::wordcount::Request>(Arena*);
template<> ::wordcount::Response* Arena::CreateMaybeMessage<::wordcount::Response>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace wordcount {

enum Response_Status : int {
  Response_Status_SUCCESS = 0,
  Response_Status_FAIELD = 1,
  Response_Status_Response_Status_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  Response_Status_Response_Status_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool Response_Status_IsValid(int value);
constexpr Response_Status Response_Status_Status_MIN = Response_Status_SUCCESS;
constexpr Response_Status Response_Status_Status_MAX = Response_Status_FAIELD;
constexpr int Response_Status_Status_ARRAYSIZE = Response_Status_Status_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Response_Status_descriptor();
template<typename T>
inline const std::string& Response_Status_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Response_Status>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Response_Status_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Response_Status_descriptor(), enum_t_value);
}
inline bool Response_Status_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, Response_Status* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Response_Status>(
    Response_Status_descriptor(), name, value);
}
// ===================================================================

class Request final :
    public ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase /* @@protoc_insertion_point(class_definition:wordcount.Request) */ {
 public:
  inline Request() : Request(nullptr) {}
  explicit PROTOBUF_CONSTEXPR Request(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Request(const Request& from);
  Request(Request&& from) noexcept
    : Request() {
    *this = ::std::move(from);
  }

  inline Request& operator=(const Request& from) {
    CopyFrom(from);
    return *this;
  }
  inline Request& operator=(Request&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Request& default_instance() {
    return *internal_default_instance();
  }
  static inline const Request* internal_default_instance() {
    return reinterpret_cast<const Request*>(
               &_Request_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Request& a, Request& b) {
    a.Swap(&b);
  }
  inline void Swap(Request* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Request* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Request* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Request>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyFrom;
  inline void CopyFrom(const Request& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl(*this, from);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeFrom;
  void MergeFrom(const Request& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl(*this, from);
  }
  public:

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "wordcount.Request";
  }
  protected:
  explicit Request(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:wordcount.Request)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
  };
  friend struct ::TableStruct_datastore_2eproto;
};
// -------------------------------------------------------------------

class Response final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:wordcount.Response) */ {
 public:
  inline Response() : Response(nullptr) {}
  ~Response() override;
  explicit PROTOBUF_CONSTEXPR Response(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Response(const Response& from);
  Response(Response&& from) noexcept
    : Response() {
    *this = ::std::move(from);
  }

  inline Response& operator=(const Response& from) {
    CopyFrom(from);
    return *this;
  }
  inline Response& operator=(Response&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Response& default_instance() {
    return *internal_default_instance();
  }
  static inline const Response* internal_default_instance() {
    return reinterpret_cast<const Response*>(
               &_Response_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Response& a, Response& b) {
    a.Swap(&b);
  }
  inline void Swap(Response* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Response* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Response* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Response>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Response& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Response& from) {
    Response::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Response* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "wordcount.Response";
  }
  protected:
  explicit Response(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef Response_Status Status;
  static constexpr Status SUCCESS =
    Response_Status_SUCCESS;
  static constexpr Status FAIELD =
    Response_Status_FAIELD;
  static inline bool Status_IsValid(int value) {
    return Response_Status_IsValid(value);
  }
  static constexpr Status Status_MIN =
    Response_Status_Status_MIN;
  static constexpr Status Status_MAX =
    Response_Status_Status_MAX;
  static constexpr int Status_ARRAYSIZE =
    Response_Status_Status_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Status_descriptor() {
    return Response_Status_descriptor();
  }
  template<typename T>
  static inline const std::string& Status_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Status>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Status_Name.");
    return Response_Status_Name(enum_t_value);
  }
  static inline bool Status_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      Status* value) {
    return Response_Status_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kFilepathFieldNumber = 1,
    kStatusFieldNumber = 2,
  };
  // string filepath = 1;
  void clear_filepath();
  const std::string& filepath() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_filepath(ArgT0&& arg0, ArgT... args);
  std::string* mutable_filepath();
  PROTOBUF_NODISCARD std::string* release_filepath();
  void set_allocated_filepath(std::string* filepath);
  private:
  const std::string& _internal_filepath() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_filepath(const std::string& value);
  std::string* _internal_mutable_filepath();
  public:

  // .wordcount.Response.Status status = 2;
  void clear_status();
  ::wordcount::Response_Status status() const;
  void set_status(::wordcount::Response_Status value);
  private:
  ::wordcount::Response_Status _internal_status() const;
  void _internal_set_status(::wordcount::Response_Status value);
  public:

  // @@protoc_insertion_point(class_scope:wordcount.Response)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr filepath_;
    int status_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_datastore_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Request

// -------------------------------------------------------------------

// Response

// string filepath = 1;
inline void Response::clear_filepath() {
  _impl_.filepath_.ClearToEmpty();
}
inline const std::string& Response::filepath() const {
  // @@protoc_insertion_point(field_get:wordcount.Response.filepath)
  return _internal_filepath();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Response::set_filepath(ArgT0&& arg0, ArgT... args) {
 
 _impl_.filepath_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:wordcount.Response.filepath)
}
inline std::string* Response::mutable_filepath() {
  std::string* _s = _internal_mutable_filepath();
  // @@protoc_insertion_point(field_mutable:wordcount.Response.filepath)
  return _s;
}
inline const std::string& Response::_internal_filepath() const {
  return _impl_.filepath_.Get();
}
inline void Response::_internal_set_filepath(const std::string& value) {
  
  _impl_.filepath_.Set(value, GetArenaForAllocation());
}
inline std::string* Response::_internal_mutable_filepath() {
  
  return _impl_.filepath_.Mutable(GetArenaForAllocation());
}
inline std::string* Response::release_filepath() {
  // @@protoc_insertion_point(field_release:wordcount.Response.filepath)
  return _impl_.filepath_.Release();
}
inline void Response::set_allocated_filepath(std::string* filepath) {
  if (filepath != nullptr) {
    
  } else {
    
  }
  _impl_.filepath_.SetAllocated(filepath, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.filepath_.IsDefault()) {
    _impl_.filepath_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:wordcount.Response.filepath)
}

// .wordcount.Response.Status status = 2;
inline void Response::clear_status() {
  _impl_.status_ = 0;
}
inline ::wordcount::Response_Status Response::_internal_status() const {
  return static_cast< ::wordcount::Response_Status >(_impl_.status_);
}
inline ::wordcount::Response_Status Response::status() const {
  // @@protoc_insertion_point(field_get:wordcount.Response.status)
  return _internal_status();
}
inline void Response::_internal_set_status(::wordcount::Response_Status value) {
  
  _impl_.status_ = value;
}
inline void Response::set_status(::wordcount::Response_Status value) {
  _internal_set_status(value);
  // @@protoc_insertion_point(field_set:wordcount.Response.status)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace wordcount

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::wordcount::Response_Status> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::wordcount::Response_Status>() {
  return ::wordcount::Response_Status_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_datastore_2eproto
