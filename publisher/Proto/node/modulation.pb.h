// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: node/modulation.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_node_2fmodulation_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_node_2fmodulation_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3015000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3015002 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_node_2fmodulation_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_node_2fmodulation_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_node_2fmodulation_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_node_2fmodulation_2eproto_metadata_getter(int index);
namespace zb {
namespace dcts {
namespace node {
namespace modulation {
class RecognizeResult;
struct RecognizeResultDefaultTypeInternal;
extern RecognizeResultDefaultTypeInternal _RecognizeResult_default_instance_;
}  // namespace modulation
}  // namespace node
}  // namespace dcts
}  // namespace zb
PROTOBUF_NAMESPACE_OPEN
template<> ::zb::dcts::node::modulation::RecognizeResult* Arena::CreateMaybeMessage<::zb::dcts::node::modulation::RecognizeResult>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace zb {
namespace dcts {
namespace node {
namespace modulation {

enum ModType : int {
  UNKNOWM = 0,
  AM = 1,
  AMSC = 2,
  AMTC = 3,
  SSB = 4,
  DSB = 5,
  VSB = 6,
  LSB = 7,
  USB = 8,
  FM = 11,
  ASK = 21,
  ASK2 = 22,
  ASK4 = 23,
  ASK8 = 24,
  ASK16 = 25,
  FSK = 31,
  FSK2 = 32,
  FSK4 = 33,
  FSK8 = 34,
  FSK16 = 35,
  MSK = 36,
  PSK = 41,
  BPSK = 42,
  OQPSK = 43,
  QPSK = 44,
  Pi4QPSK = 45,
  PSK8 = 46,
  PSK16 = 47,
  D8PSK = 48,
  QAM = 51,
  QAM16 = 52,
  QAM32 = 53,
  QAM64 = 54,
  QAM128 = 55,
  QAM256 = 56,
  QAM512 = 57,
  QAM1024 = 58,
  CW = 70,
  Noise = 80,
  ModType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  ModType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool ModType_IsValid(int value);
constexpr ModType ModType_MIN = UNKNOWM;
constexpr ModType ModType_MAX = Noise;
constexpr int ModType_ARRAYSIZE = ModType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ModType_descriptor();
template<typename T>
inline const std::string& ModType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ModType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ModType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ModType_descriptor(), enum_t_value);
}
inline bool ModType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ModType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ModType>(
    ModType_descriptor(), name, value);
}
enum SigType : int {
  UN_DETECT = 0,
  NARROW_BAND = 1,
  WIDE_BAND = 2,
  PULSE = 3,
  SigType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  SigType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool SigType_IsValid(int value);
constexpr SigType SigType_MIN = UN_DETECT;
constexpr SigType SigType_MAX = PULSE;
constexpr int SigType_ARRAYSIZE = SigType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SigType_descriptor();
template<typename T>
inline const std::string& SigType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, SigType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function SigType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    SigType_descriptor(), enum_t_value);
}
inline bool SigType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, SigType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<SigType>(
    SigType_descriptor(), name, value);
}
// ===================================================================

class RecognizeResult PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:zb.dcts.node.modulation.RecognizeResult) */ {
 public:
  inline RecognizeResult() : RecognizeResult(nullptr) {}
  virtual ~RecognizeResult();
  explicit constexpr RecognizeResult(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  RecognizeResult(const RecognizeResult& from);
  RecognizeResult(RecognizeResult&& from) noexcept
    : RecognizeResult() {
    *this = ::std::move(from);
  }

  inline RecognizeResult& operator=(const RecognizeResult& from) {
    CopyFrom(from);
    return *this;
  }
  inline RecognizeResult& operator=(RecognizeResult&& from) noexcept {
    if (GetArena() == from.GetArena()) {
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
  static const RecognizeResult& default_instance() {
    return *internal_default_instance();
  }
  static inline const RecognizeResult* internal_default_instance() {
    return reinterpret_cast<const RecognizeResult*>(
               &_RecognizeResult_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RecognizeResult& a, RecognizeResult& b) {
    a.Swap(&b);
  }
  inline void Swap(RecognizeResult* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(RecognizeResult* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline RecognizeResult* New() const final {
    return CreateMaybeMessage<RecognizeResult>(nullptr);
  }

  RecognizeResult* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<RecognizeResult>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const RecognizeResult& from);
  void MergeFrom(const RecognizeResult& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RecognizeResult* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "zb.dcts.node.modulation.RecognizeResult";
  }
  protected:
  explicit RecognizeResult(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_node_2fmodulation_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSignalTypeFieldNumber = 1,
    kModTypeFieldNumber = 2,
    kCenterFreqFieldNumber = 3,
    kBandWidthFieldNumber = 4,
  };
  // .zb.dcts.node.modulation.SigType signal_type = 1;
  void clear_signal_type();
  ::zb::dcts::node::modulation::SigType signal_type() const;
  void set_signal_type(::zb::dcts::node::modulation::SigType value);
  private:
  ::zb::dcts::node::modulation::SigType _internal_signal_type() const;
  void _internal_set_signal_type(::zb::dcts::node::modulation::SigType value);
  public:

  // .zb.dcts.node.modulation.ModType mod_type = 2;
  void clear_mod_type();
  ::zb::dcts::node::modulation::ModType mod_type() const;
  void set_mod_type(::zb::dcts::node::modulation::ModType value);
  private:
  ::zb::dcts::node::modulation::ModType _internal_mod_type() const;
  void _internal_set_mod_type(::zb::dcts::node::modulation::ModType value);
  public:

  // double center_freq = 3;
  void clear_center_freq();
  double center_freq() const;
  void set_center_freq(double value);
  private:
  double _internal_center_freq() const;
  void _internal_set_center_freq(double value);
  public:

  // double band_width = 4;
  void clear_band_width();
  double band_width() const;
  void set_band_width(double value);
  private:
  double _internal_band_width() const;
  void _internal_set_band_width(double value);
  public:

  // @@protoc_insertion_point(class_scope:zb.dcts.node.modulation.RecognizeResult)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  int signal_type_;
  int mod_type_;
  double center_freq_;
  double band_width_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_node_2fmodulation_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RecognizeResult

// .zb.dcts.node.modulation.SigType signal_type = 1;
inline void RecognizeResult::clear_signal_type() {
  signal_type_ = 0;
}
inline ::zb::dcts::node::modulation::SigType RecognizeResult::_internal_signal_type() const {
  return static_cast< ::zb::dcts::node::modulation::SigType >(signal_type_);
}
inline ::zb::dcts::node::modulation::SigType RecognizeResult::signal_type() const {
  // @@protoc_insertion_point(field_get:zb.dcts.node.modulation.RecognizeResult.signal_type)
  return _internal_signal_type();
}
inline void RecognizeResult::_internal_set_signal_type(::zb::dcts::node::modulation::SigType value) {
  
  signal_type_ = value;
}
inline void RecognizeResult::set_signal_type(::zb::dcts::node::modulation::SigType value) {
  _internal_set_signal_type(value);
  // @@protoc_insertion_point(field_set:zb.dcts.node.modulation.RecognizeResult.signal_type)
}

// .zb.dcts.node.modulation.ModType mod_type = 2;
inline void RecognizeResult::clear_mod_type() {
  mod_type_ = 0;
}
inline ::zb::dcts::node::modulation::ModType RecognizeResult::_internal_mod_type() const {
  return static_cast< ::zb::dcts::node::modulation::ModType >(mod_type_);
}
inline ::zb::dcts::node::modulation::ModType RecognizeResult::mod_type() const {
  // @@protoc_insertion_point(field_get:zb.dcts.node.modulation.RecognizeResult.mod_type)
  return _internal_mod_type();
}
inline void RecognizeResult::_internal_set_mod_type(::zb::dcts::node::modulation::ModType value) {
  
  mod_type_ = value;
}
inline void RecognizeResult::set_mod_type(::zb::dcts::node::modulation::ModType value) {
  _internal_set_mod_type(value);
  // @@protoc_insertion_point(field_set:zb.dcts.node.modulation.RecognizeResult.mod_type)
}

// double center_freq = 3;
inline void RecognizeResult::clear_center_freq() {
  center_freq_ = 0;
}
inline double RecognizeResult::_internal_center_freq() const {
  return center_freq_;
}
inline double RecognizeResult::center_freq() const {
  // @@protoc_insertion_point(field_get:zb.dcts.node.modulation.RecognizeResult.center_freq)
  return _internal_center_freq();
}
inline void RecognizeResult::_internal_set_center_freq(double value) {
  
  center_freq_ = value;
}
inline void RecognizeResult::set_center_freq(double value) {
  _internal_set_center_freq(value);
  // @@protoc_insertion_point(field_set:zb.dcts.node.modulation.RecognizeResult.center_freq)
}

// double band_width = 4;
inline void RecognizeResult::clear_band_width() {
  band_width_ = 0;
}
inline double RecognizeResult::_internal_band_width() const {
  return band_width_;
}
inline double RecognizeResult::band_width() const {
  // @@protoc_insertion_point(field_get:zb.dcts.node.modulation.RecognizeResult.band_width)
  return _internal_band_width();
}
inline void RecognizeResult::_internal_set_band_width(double value) {
  
  band_width_ = value;
}
inline void RecognizeResult::set_band_width(double value) {
  _internal_set_band_width(value);
  // @@protoc_insertion_point(field_set:zb.dcts.node.modulation.RecognizeResult.band_width)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace modulation
}  // namespace node
}  // namespace dcts
}  // namespace zb

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::zb::dcts::node::modulation::ModType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::zb::dcts::node::modulation::ModType>() {
  return ::zb::dcts::node::modulation::ModType_descriptor();
}
template <> struct is_proto_enum< ::zb::dcts::node::modulation::SigType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::zb::dcts::node::modulation::SigType>() {
  return ::zb::dcts::node::modulation::SigType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_node_2fmodulation_2eproto
