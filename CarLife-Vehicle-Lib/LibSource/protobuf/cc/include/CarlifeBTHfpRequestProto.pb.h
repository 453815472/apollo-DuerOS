// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CarlifeBTHfpRequestProto.proto

#ifndef PROTOBUF_CarlifeBTHfpRequestProto_2eproto__INCLUDED
#define PROTOBUF_CarlifeBTHfpRequestProto_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace baidu {
namespace carlife {
namespace protobuf {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_CarlifeBTHfpRequestProto_2eproto();
void protobuf_AssignDesc_CarlifeBTHfpRequestProto_2eproto();
void protobuf_ShutdownFile_CarlifeBTHfpRequestProto_2eproto();

class CarlifeBTHfpRequest;

// ===================================================================

class CarlifeBTHfpRequest : public ::google::protobuf::Message {
 public:
  CarlifeBTHfpRequest();
  virtual ~CarlifeBTHfpRequest();

  CarlifeBTHfpRequest(const CarlifeBTHfpRequest& from);

  inline CarlifeBTHfpRequest& operator=(const CarlifeBTHfpRequest& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CarlifeBTHfpRequest& default_instance();

  void Swap(CarlifeBTHfpRequest* other);

  // implements Message ----------------------------------------------

  CarlifeBTHfpRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CarlifeBTHfpRequest& from);
  void MergeFrom(const CarlifeBTHfpRequest& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 command = 1;
  inline bool has_command() const;
  inline void clear_command();
  static const int kCommandFieldNumber = 1;
  inline ::google::protobuf::int32 command() const;
  inline void set_command(::google::protobuf::int32 value);

  // optional string phoneNum = 2;
  inline bool has_phonenum() const;
  inline void clear_phonenum();
  static const int kPhoneNumFieldNumber = 2;
  inline const ::std::string& phonenum() const;
  inline void set_phonenum(const ::std::string& value);
  inline void set_phonenum(const char* value);
  inline void set_phonenum(const char* value, size_t size);
  inline ::std::string* mutable_phonenum();
  inline ::std::string* release_phonenum();
  inline void set_allocated_phonenum(::std::string* phonenum);

  // optional int32 dtmfCode = 3;
  inline bool has_dtmfcode() const;
  inline void clear_dtmfcode();
  static const int kDtmfCodeFieldNumber = 3;
  inline ::google::protobuf::int32 dtmfcode() const;
  inline void set_dtmfcode(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:com.baidu.carlife.protobuf.CarlifeBTHfpRequest)
 private:
  inline void set_has_command();
  inline void clear_has_command();
  inline void set_has_phonenum();
  inline void clear_has_phonenum();
  inline void set_has_dtmfcode();
  inline void clear_has_dtmfcode();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* phonenum_;
  ::google::protobuf::int32 command_;
  ::google::protobuf::int32 dtmfcode_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_CarlifeBTHfpRequestProto_2eproto();
  friend void protobuf_AssignDesc_CarlifeBTHfpRequestProto_2eproto();
  friend void protobuf_ShutdownFile_CarlifeBTHfpRequestProto_2eproto();

  void InitAsDefaultInstance();
  static CarlifeBTHfpRequest* default_instance_;
};
// ===================================================================


// ===================================================================

// CarlifeBTHfpRequest

// required int32 command = 1;
inline bool CarlifeBTHfpRequest::has_command() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CarlifeBTHfpRequest::set_has_command() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CarlifeBTHfpRequest::clear_has_command() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CarlifeBTHfpRequest::clear_command() {
  command_ = 0;
  clear_has_command();
}
inline ::google::protobuf::int32 CarlifeBTHfpRequest::command() const {
  return command_;
}
inline void CarlifeBTHfpRequest::set_command(::google::protobuf::int32 value) {
  set_has_command();
  command_ = value;
}

// optional string phoneNum = 2;
inline bool CarlifeBTHfpRequest::has_phonenum() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CarlifeBTHfpRequest::set_has_phonenum() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CarlifeBTHfpRequest::clear_has_phonenum() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CarlifeBTHfpRequest::clear_phonenum() {
  if (phonenum_ != &::google::protobuf::internal::kEmptyString) {
    phonenum_->clear();
  }
  clear_has_phonenum();
}
inline const ::std::string& CarlifeBTHfpRequest::phonenum() const {
  return *phonenum_;
}
inline void CarlifeBTHfpRequest::set_phonenum(const ::std::string& value) {
  set_has_phonenum();
  if (phonenum_ == &::google::protobuf::internal::kEmptyString) {
    phonenum_ = new ::std::string;
  }
  phonenum_->assign(value);
}
inline void CarlifeBTHfpRequest::set_phonenum(const char* value) {
  set_has_phonenum();
  if (phonenum_ == &::google::protobuf::internal::kEmptyString) {
    phonenum_ = new ::std::string;
  }
  phonenum_->assign(value);
}
inline void CarlifeBTHfpRequest::set_phonenum(const char* value, size_t size) {
  set_has_phonenum();
  if (phonenum_ == &::google::protobuf::internal::kEmptyString) {
    phonenum_ = new ::std::string;
  }
  phonenum_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CarlifeBTHfpRequest::mutable_phonenum() {
  set_has_phonenum();
  if (phonenum_ == &::google::protobuf::internal::kEmptyString) {
    phonenum_ = new ::std::string;
  }
  return phonenum_;
}
inline ::std::string* CarlifeBTHfpRequest::release_phonenum() {
  clear_has_phonenum();
  if (phonenum_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = phonenum_;
    phonenum_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void CarlifeBTHfpRequest::set_allocated_phonenum(::std::string* phonenum) {
  if (phonenum_ != &::google::protobuf::internal::kEmptyString) {
    delete phonenum_;
  }
  if (phonenum) {
    set_has_phonenum();
    phonenum_ = phonenum;
  } else {
    clear_has_phonenum();
    phonenum_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 dtmfCode = 3;
inline bool CarlifeBTHfpRequest::has_dtmfcode() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CarlifeBTHfpRequest::set_has_dtmfcode() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CarlifeBTHfpRequest::clear_has_dtmfcode() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CarlifeBTHfpRequest::clear_dtmfcode() {
  dtmfcode_ = 0;
  clear_has_dtmfcode();
}
inline ::google::protobuf::int32 CarlifeBTHfpRequest::dtmfcode() const {
  return dtmfcode_;
}
inline void CarlifeBTHfpRequest::set_dtmfcode(::google::protobuf::int32 value) {
  set_has_dtmfcode();
  dtmfcode_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace carlife
}  // namespace baidu
}  // namespace com

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_CarlifeBTHfpRequestProto_2eproto__INCLUDED