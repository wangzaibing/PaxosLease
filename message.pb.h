// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message.proto

#ifndef PROTOBUF_message_2eproto__INCLUDED
#define PROTOBUF_message_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace paxoslease {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_message_2eproto();
void protobuf_AssignDesc_message_2eproto();
void protobuf_ShutdownFile_message_2eproto();

class PrepareRequest;
class PrepareResponse;
class ProposeRequest;
class ProposeResponse;

// ===================================================================

class PrepareRequest : public ::google::protobuf::Message {
 public:
  PrepareRequest();
  virtual ~PrepareRequest();

  PrepareRequest(const PrepareRequest& from);

  inline PrepareRequest& operator=(const PrepareRequest& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PrepareRequest& default_instance();

  void Swap(PrepareRequest* other);

  // implements Message ----------------------------------------------

  inline PrepareRequest* New() const { return New(NULL); }

  PrepareRequest* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PrepareRequest& from);
  void MergeFrom(const PrepareRequest& from);
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
  void InternalSwap(PrepareRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 node_id = 1;
  inline bool has_node_id() const;
  inline void clear_node_id();
  static const int kNodeIdFieldNumber = 1;
  inline ::google::protobuf::int32 node_id() const;
  inline void set_node_id(::google::protobuf::int32 value);

  // required int32 ballot_number = 2;
  inline bool has_ballot_number() const;
  inline void clear_ballot_number();
  static const int kBallotNumberFieldNumber = 2;
  inline ::google::protobuf::int32 ballot_number() const;
  inline void set_ballot_number(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:paxoslease.PrepareRequest)
 private:
  inline void set_has_node_id();
  inline void clear_has_node_id();
  inline void set_has_ballot_number();
  inline void clear_has_ballot_number();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 node_id_;
  ::google::protobuf::int32 ballot_number_;
  friend void  protobuf_AddDesc_message_2eproto();
  friend void protobuf_AssignDesc_message_2eproto();
  friend void protobuf_ShutdownFile_message_2eproto();

  void InitAsDefaultInstance();
  static PrepareRequest* default_instance_;
};
// -------------------------------------------------------------------

class PrepareResponse : public ::google::protobuf::Message {
 public:
  PrepareResponse();
  virtual ~PrepareResponse();

  PrepareResponse(const PrepareResponse& from);

  inline PrepareResponse& operator=(const PrepareResponse& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PrepareResponse& default_instance();

  void Swap(PrepareResponse* other);

  // implements Message ----------------------------------------------

  inline PrepareResponse* New() const { return New(NULL); }

  PrepareResponse* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PrepareResponse& from);
  void MergeFrom(const PrepareResponse& from);
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
  void InternalSwap(PrepareResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 node_id = 1;
  inline bool has_node_id() const;
  inline void clear_node_id();
  static const int kNodeIdFieldNumber = 1;
  inline ::google::protobuf::int32 node_id() const;
  inline void set_node_id(::google::protobuf::int32 value);

  // required int32 ballot_number = 2;
  inline bool has_ballot_number() const;
  inline void clear_ballot_number();
  static const int kBallotNumberFieldNumber = 2;
  inline ::google::protobuf::int32 ballot_number() const;
  inline void set_ballot_number(::google::protobuf::int32 value);

  // required bool lease_empty = 3;
  inline bool has_lease_empty() const;
  inline void clear_lease_empty();
  static const int kLeaseEmptyFieldNumber = 3;
  inline bool lease_empty() const;
  inline void set_lease_empty(bool value);

  // @@protoc_insertion_point(class_scope:paxoslease.PrepareResponse)
 private:
  inline void set_has_node_id();
  inline void clear_has_node_id();
  inline void set_has_ballot_number();
  inline void clear_has_ballot_number();
  inline void set_has_lease_empty();
  inline void clear_has_lease_empty();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 node_id_;
  ::google::protobuf::int32 ballot_number_;
  bool lease_empty_;
  friend void  protobuf_AddDesc_message_2eproto();
  friend void protobuf_AssignDesc_message_2eproto();
  friend void protobuf_ShutdownFile_message_2eproto();

  void InitAsDefaultInstance();
  static PrepareResponse* default_instance_;
};
// -------------------------------------------------------------------

class ProposeRequest : public ::google::protobuf::Message {
 public:
  ProposeRequest();
  virtual ~ProposeRequest();

  ProposeRequest(const ProposeRequest& from);

  inline ProposeRequest& operator=(const ProposeRequest& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ProposeRequest& default_instance();

  void Swap(ProposeRequest* other);

  // implements Message ----------------------------------------------

  inline ProposeRequest* New() const { return New(NULL); }

  ProposeRequest* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ProposeRequest& from);
  void MergeFrom(const ProposeRequest& from);
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
  void InternalSwap(ProposeRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 node_id = 1;
  inline bool has_node_id() const;
  inline void clear_node_id();
  static const int kNodeIdFieldNumber = 1;
  inline ::google::protobuf::int32 node_id() const;
  inline void set_node_id(::google::protobuf::int32 value);

  // required int32 ballot_number = 2;
  inline bool has_ballot_number() const;
  inline void clear_ballot_number();
  static const int kBallotNumberFieldNumber = 2;
  inline ::google::protobuf::int32 ballot_number() const;
  inline void set_ballot_number(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:paxoslease.ProposeRequest)
 private:
  inline void set_has_node_id();
  inline void clear_has_node_id();
  inline void set_has_ballot_number();
  inline void clear_has_ballot_number();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 node_id_;
  ::google::protobuf::int32 ballot_number_;
  friend void  protobuf_AddDesc_message_2eproto();
  friend void protobuf_AssignDesc_message_2eproto();
  friend void protobuf_ShutdownFile_message_2eproto();

  void InitAsDefaultInstance();
  static ProposeRequest* default_instance_;
};
// -------------------------------------------------------------------

class ProposeResponse : public ::google::protobuf::Message {
 public:
  ProposeResponse();
  virtual ~ProposeResponse();

  ProposeResponse(const ProposeResponse& from);

  inline ProposeResponse& operator=(const ProposeResponse& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ProposeResponse& default_instance();

  void Swap(ProposeResponse* other);

  // implements Message ----------------------------------------------

  inline ProposeResponse* New() const { return New(NULL); }

  ProposeResponse* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ProposeResponse& from);
  void MergeFrom(const ProposeResponse& from);
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
  void InternalSwap(ProposeResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 node_id = 1;
  inline bool has_node_id() const;
  inline void clear_node_id();
  static const int kNodeIdFieldNumber = 1;
  inline ::google::protobuf::int32 node_id() const;
  inline void set_node_id(::google::protobuf::int32 value);

  // required int32 ballot_number = 2;
  inline bool has_ballot_number() const;
  inline void clear_ballot_number();
  static const int kBallotNumberFieldNumber = 2;
  inline ::google::protobuf::int32 ballot_number() const;
  inline void set_ballot_number(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:paxoslease.ProposeResponse)
 private:
  inline void set_has_node_id();
  inline void clear_has_node_id();
  inline void set_has_ballot_number();
  inline void clear_has_ballot_number();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 node_id_;
  ::google::protobuf::int32 ballot_number_;
  friend void  protobuf_AddDesc_message_2eproto();
  friend void protobuf_AssignDesc_message_2eproto();
  friend void protobuf_ShutdownFile_message_2eproto();

  void InitAsDefaultInstance();
  static ProposeResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// PrepareRequest

// required int32 node_id = 1;
inline bool PrepareRequest::has_node_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PrepareRequest::set_has_node_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PrepareRequest::clear_has_node_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PrepareRequest::clear_node_id() {
  node_id_ = 0;
  clear_has_node_id();
}
inline ::google::protobuf::int32 PrepareRequest::node_id() const {
  // @@protoc_insertion_point(field_get:paxoslease.PrepareRequest.node_id)
  return node_id_;
}
inline void PrepareRequest::set_node_id(::google::protobuf::int32 value) {
  set_has_node_id();
  node_id_ = value;
  // @@protoc_insertion_point(field_set:paxoslease.PrepareRequest.node_id)
}

// required int32 ballot_number = 2;
inline bool PrepareRequest::has_ballot_number() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PrepareRequest::set_has_ballot_number() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PrepareRequest::clear_has_ballot_number() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PrepareRequest::clear_ballot_number() {
  ballot_number_ = 0;
  clear_has_ballot_number();
}
inline ::google::protobuf::int32 PrepareRequest::ballot_number() const {
  // @@protoc_insertion_point(field_get:paxoslease.PrepareRequest.ballot_number)
  return ballot_number_;
}
inline void PrepareRequest::set_ballot_number(::google::protobuf::int32 value) {
  set_has_ballot_number();
  ballot_number_ = value;
  // @@protoc_insertion_point(field_set:paxoslease.PrepareRequest.ballot_number)
}

// -------------------------------------------------------------------

// PrepareResponse

// required int32 node_id = 1;
inline bool PrepareResponse::has_node_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PrepareResponse::set_has_node_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PrepareResponse::clear_has_node_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PrepareResponse::clear_node_id() {
  node_id_ = 0;
  clear_has_node_id();
}
inline ::google::protobuf::int32 PrepareResponse::node_id() const {
  // @@protoc_insertion_point(field_get:paxoslease.PrepareResponse.node_id)
  return node_id_;
}
inline void PrepareResponse::set_node_id(::google::protobuf::int32 value) {
  set_has_node_id();
  node_id_ = value;
  // @@protoc_insertion_point(field_set:paxoslease.PrepareResponse.node_id)
}

// required int32 ballot_number = 2;
inline bool PrepareResponse::has_ballot_number() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PrepareResponse::set_has_ballot_number() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PrepareResponse::clear_has_ballot_number() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PrepareResponse::clear_ballot_number() {
  ballot_number_ = 0;
  clear_has_ballot_number();
}
inline ::google::protobuf::int32 PrepareResponse::ballot_number() const {
  // @@protoc_insertion_point(field_get:paxoslease.PrepareResponse.ballot_number)
  return ballot_number_;
}
inline void PrepareResponse::set_ballot_number(::google::protobuf::int32 value) {
  set_has_ballot_number();
  ballot_number_ = value;
  // @@protoc_insertion_point(field_set:paxoslease.PrepareResponse.ballot_number)
}

// required bool lease_empty = 3;
inline bool PrepareResponse::has_lease_empty() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PrepareResponse::set_has_lease_empty() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PrepareResponse::clear_has_lease_empty() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PrepareResponse::clear_lease_empty() {
  lease_empty_ = false;
  clear_has_lease_empty();
}
inline bool PrepareResponse::lease_empty() const {
  // @@protoc_insertion_point(field_get:paxoslease.PrepareResponse.lease_empty)
  return lease_empty_;
}
inline void PrepareResponse::set_lease_empty(bool value) {
  set_has_lease_empty();
  lease_empty_ = value;
  // @@protoc_insertion_point(field_set:paxoslease.PrepareResponse.lease_empty)
}

// -------------------------------------------------------------------

// ProposeRequest

// required int32 node_id = 1;
inline bool ProposeRequest::has_node_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ProposeRequest::set_has_node_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ProposeRequest::clear_has_node_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ProposeRequest::clear_node_id() {
  node_id_ = 0;
  clear_has_node_id();
}
inline ::google::protobuf::int32 ProposeRequest::node_id() const {
  // @@protoc_insertion_point(field_get:paxoslease.ProposeRequest.node_id)
  return node_id_;
}
inline void ProposeRequest::set_node_id(::google::protobuf::int32 value) {
  set_has_node_id();
  node_id_ = value;
  // @@protoc_insertion_point(field_set:paxoslease.ProposeRequest.node_id)
}

// required int32 ballot_number = 2;
inline bool ProposeRequest::has_ballot_number() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ProposeRequest::set_has_ballot_number() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ProposeRequest::clear_has_ballot_number() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ProposeRequest::clear_ballot_number() {
  ballot_number_ = 0;
  clear_has_ballot_number();
}
inline ::google::protobuf::int32 ProposeRequest::ballot_number() const {
  // @@protoc_insertion_point(field_get:paxoslease.ProposeRequest.ballot_number)
  return ballot_number_;
}
inline void ProposeRequest::set_ballot_number(::google::protobuf::int32 value) {
  set_has_ballot_number();
  ballot_number_ = value;
  // @@protoc_insertion_point(field_set:paxoslease.ProposeRequest.ballot_number)
}

// -------------------------------------------------------------------

// ProposeResponse

// required int32 node_id = 1;
inline bool ProposeResponse::has_node_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ProposeResponse::set_has_node_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ProposeResponse::clear_has_node_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ProposeResponse::clear_node_id() {
  node_id_ = 0;
  clear_has_node_id();
}
inline ::google::protobuf::int32 ProposeResponse::node_id() const {
  // @@protoc_insertion_point(field_get:paxoslease.ProposeResponse.node_id)
  return node_id_;
}
inline void ProposeResponse::set_node_id(::google::protobuf::int32 value) {
  set_has_node_id();
  node_id_ = value;
  // @@protoc_insertion_point(field_set:paxoslease.ProposeResponse.node_id)
}

// required int32 ballot_number = 2;
inline bool ProposeResponse::has_ballot_number() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ProposeResponse::set_has_ballot_number() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ProposeResponse::clear_has_ballot_number() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ProposeResponse::clear_ballot_number() {
  ballot_number_ = 0;
  clear_has_ballot_number();
}
inline ::google::protobuf::int32 ProposeResponse::ballot_number() const {
  // @@protoc_insertion_point(field_get:paxoslease.ProposeResponse.ballot_number)
  return ballot_number_;
}
inline void ProposeResponse::set_ballot_number(::google::protobuf::int32 value) {
  set_has_ballot_number();
  ballot_number_ = value;
  // @@protoc_insertion_point(field_set:paxoslease.ProposeResponse.ballot_number)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace paxoslease

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_message_2eproto__INCLUDED
