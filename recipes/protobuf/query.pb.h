// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: query.proto

#ifndef PROTOBUF_query_2eproto__INCLUDED
#define PROTOBUF_query_2eproto__INCLUDED

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

namespace muduo {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_query_2eproto();
void protobuf_AssignDesc_query_2eproto();
void protobuf_ShutdownFile_query_2eproto();

class Answer;
class Empty;
class Query;

// ===================================================================

class Query : public ::google::protobuf::Message {
 public:
  Query();
  virtual ~Query();

  Query(const Query& from);

  inline Query& operator=(const Query& from) {
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
  static const Query& default_instance();

  void Swap(Query* other);

  // implements Message ----------------------------------------------

  inline Query* New() const { return New(NULL); }

  Query* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Query& from);
  void MergeFrom(const Query& from);
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
  void InternalSwap(Query* other);
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

  // required int64 id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int64 id() const;
  void set_id(::google::protobuf::int64 value);

  // required string questioner = 2;
  bool has_questioner() const;
  void clear_questioner();
  static const int kQuestionerFieldNumber = 2;
  const ::std::string& questioner() const;
  void set_questioner(const ::std::string& value);
  void set_questioner(const char* value);
  void set_questioner(const char* value, size_t size);
  ::std::string* mutable_questioner();
  ::std::string* release_questioner();
  void set_allocated_questioner(::std::string* questioner);

  // repeated string question = 3;
  int question_size() const;
  void clear_question();
  static const int kQuestionFieldNumber = 3;
  const ::std::string& question(int index) const;
  ::std::string* mutable_question(int index);
  void set_question(int index, const ::std::string& value);
  void set_question(int index, const char* value);
  void set_question(int index, const char* value, size_t size);
  ::std::string* add_question();
  void add_question(const ::std::string& value);
  void add_question(const char* value);
  void add_question(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& question() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_question();

  // @@protoc_insertion_point(class_scope:muduo.Query)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_questioner();
  inline void clear_has_questioner();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 id_;
  ::google::protobuf::internal::ArenaStringPtr questioner_;
  ::google::protobuf::RepeatedPtrField< ::std::string> question_;
  friend void  protobuf_AddDesc_query_2eproto();
  friend void protobuf_AssignDesc_query_2eproto();
  friend void protobuf_ShutdownFile_query_2eproto();

  void InitAsDefaultInstance();
  static Query* default_instance_;
};
// -------------------------------------------------------------------

class Answer : public ::google::protobuf::Message {
 public:
  Answer();
  virtual ~Answer();

  Answer(const Answer& from);

  inline Answer& operator=(const Answer& from) {
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
  static const Answer& default_instance();

  void Swap(Answer* other);

  // implements Message ----------------------------------------------

  inline Answer* New() const { return New(NULL); }

  Answer* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Answer& from);
  void MergeFrom(const Answer& from);
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
  void InternalSwap(Answer* other);
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

  // required int64 id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int64 id() const;
  void set_id(::google::protobuf::int64 value);

  // required string questioner = 2;
  bool has_questioner() const;
  void clear_questioner();
  static const int kQuestionerFieldNumber = 2;
  const ::std::string& questioner() const;
  void set_questioner(const ::std::string& value);
  void set_questioner(const char* value);
  void set_questioner(const char* value, size_t size);
  ::std::string* mutable_questioner();
  ::std::string* release_questioner();
  void set_allocated_questioner(::std::string* questioner);

  // required string answerer = 3;
  bool has_answerer() const;
  void clear_answerer();
  static const int kAnswererFieldNumber = 3;
  const ::std::string& answerer() const;
  void set_answerer(const ::std::string& value);
  void set_answerer(const char* value);
  void set_answerer(const char* value, size_t size);
  ::std::string* mutable_answerer();
  ::std::string* release_answerer();
  void set_allocated_answerer(::std::string* answerer);

  // repeated string solution = 4;
  int solution_size() const;
  void clear_solution();
  static const int kSolutionFieldNumber = 4;
  const ::std::string& solution(int index) const;
  ::std::string* mutable_solution(int index);
  void set_solution(int index, const ::std::string& value);
  void set_solution(int index, const char* value);
  void set_solution(int index, const char* value, size_t size);
  ::std::string* add_solution();
  void add_solution(const ::std::string& value);
  void add_solution(const char* value);
  void add_solution(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& solution() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_solution();

  // @@protoc_insertion_point(class_scope:muduo.Answer)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_questioner();
  inline void clear_has_questioner();
  inline void set_has_answerer();
  inline void clear_has_answerer();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 id_;
  ::google::protobuf::internal::ArenaStringPtr questioner_;
  ::google::protobuf::internal::ArenaStringPtr answerer_;
  ::google::protobuf::RepeatedPtrField< ::std::string> solution_;
  friend void  protobuf_AddDesc_query_2eproto();
  friend void protobuf_AssignDesc_query_2eproto();
  friend void protobuf_ShutdownFile_query_2eproto();

  void InitAsDefaultInstance();
  static Answer* default_instance_;
};
// -------------------------------------------------------------------

class Empty : public ::google::protobuf::Message {
 public:
  Empty();
  virtual ~Empty();

  Empty(const Empty& from);

  inline Empty& operator=(const Empty& from) {
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
  static const Empty& default_instance();

  void Swap(Empty* other);

  // implements Message ----------------------------------------------

  inline Empty* New() const { return New(NULL); }

  Empty* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Empty& from);
  void MergeFrom(const Empty& from);
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
  void InternalSwap(Empty* other);
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

  // optional int32 id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:muduo.Empty)
 private:
  inline void set_has_id();
  inline void clear_has_id();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 id_;
  friend void  protobuf_AddDesc_query_2eproto();
  friend void protobuf_AssignDesc_query_2eproto();
  friend void protobuf_ShutdownFile_query_2eproto();

  void InitAsDefaultInstance();
  static Empty* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Query

// required int64 id = 1;
inline bool Query::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Query::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Query::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Query::clear_id() {
  id_ = GOOGLE_LONGLONG(0);
  clear_has_id();
}
inline ::google::protobuf::int64 Query::id() const {
  // @@protoc_insertion_point(field_get:muduo.Query.id)
  return id_;
}
inline void Query::set_id(::google::protobuf::int64 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:muduo.Query.id)
}

// required string questioner = 2;
inline bool Query::has_questioner() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Query::set_has_questioner() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Query::clear_has_questioner() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Query::clear_questioner() {
  questioner_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_questioner();
}
inline const ::std::string& Query::questioner() const {
  // @@protoc_insertion_point(field_get:muduo.Query.questioner)
  return questioner_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Query::set_questioner(const ::std::string& value) {
  set_has_questioner();
  questioner_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:muduo.Query.questioner)
}
inline void Query::set_questioner(const char* value) {
  set_has_questioner();
  questioner_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:muduo.Query.questioner)
}
inline void Query::set_questioner(const char* value, size_t size) {
  set_has_questioner();
  questioner_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:muduo.Query.questioner)
}
inline ::std::string* Query::mutable_questioner() {
  set_has_questioner();
  // @@protoc_insertion_point(field_mutable:muduo.Query.questioner)
  return questioner_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Query::release_questioner() {
  // @@protoc_insertion_point(field_release:muduo.Query.questioner)
  clear_has_questioner();
  return questioner_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Query::set_allocated_questioner(::std::string* questioner) {
  if (questioner != NULL) {
    set_has_questioner();
  } else {
    clear_has_questioner();
  }
  questioner_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), questioner);
  // @@protoc_insertion_point(field_set_allocated:muduo.Query.questioner)
}

// repeated string question = 3;
inline int Query::question_size() const {
  return question_.size();
}
inline void Query::clear_question() {
  question_.Clear();
}
inline const ::std::string& Query::question(int index) const {
  // @@protoc_insertion_point(field_get:muduo.Query.question)
  return question_.Get(index);
}
inline ::std::string* Query::mutable_question(int index) {
  // @@protoc_insertion_point(field_mutable:muduo.Query.question)
  return question_.Mutable(index);
}
inline void Query::set_question(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:muduo.Query.question)
  question_.Mutable(index)->assign(value);
}
inline void Query::set_question(int index, const char* value) {
  question_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:muduo.Query.question)
}
inline void Query::set_question(int index, const char* value, size_t size) {
  question_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:muduo.Query.question)
}
inline ::std::string* Query::add_question() {
  // @@protoc_insertion_point(field_add_mutable:muduo.Query.question)
  return question_.Add();
}
inline void Query::add_question(const ::std::string& value) {
  question_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:muduo.Query.question)
}
inline void Query::add_question(const char* value) {
  question_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:muduo.Query.question)
}
inline void Query::add_question(const char* value, size_t size) {
  question_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:muduo.Query.question)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
Query::question() const {
  // @@protoc_insertion_point(field_list:muduo.Query.question)
  return question_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
Query::mutable_question() {
  // @@protoc_insertion_point(field_mutable_list:muduo.Query.question)
  return &question_;
}

// -------------------------------------------------------------------

// Answer

// required int64 id = 1;
inline bool Answer::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Answer::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Answer::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Answer::clear_id() {
  id_ = GOOGLE_LONGLONG(0);
  clear_has_id();
}
inline ::google::protobuf::int64 Answer::id() const {
  // @@protoc_insertion_point(field_get:muduo.Answer.id)
  return id_;
}
inline void Answer::set_id(::google::protobuf::int64 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:muduo.Answer.id)
}

// required string questioner = 2;
inline bool Answer::has_questioner() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Answer::set_has_questioner() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Answer::clear_has_questioner() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Answer::clear_questioner() {
  questioner_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_questioner();
}
inline const ::std::string& Answer::questioner() const {
  // @@protoc_insertion_point(field_get:muduo.Answer.questioner)
  return questioner_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Answer::set_questioner(const ::std::string& value) {
  set_has_questioner();
  questioner_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:muduo.Answer.questioner)
}
inline void Answer::set_questioner(const char* value) {
  set_has_questioner();
  questioner_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:muduo.Answer.questioner)
}
inline void Answer::set_questioner(const char* value, size_t size) {
  set_has_questioner();
  questioner_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:muduo.Answer.questioner)
}
inline ::std::string* Answer::mutable_questioner() {
  set_has_questioner();
  // @@protoc_insertion_point(field_mutable:muduo.Answer.questioner)
  return questioner_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Answer::release_questioner() {
  // @@protoc_insertion_point(field_release:muduo.Answer.questioner)
  clear_has_questioner();
  return questioner_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Answer::set_allocated_questioner(::std::string* questioner) {
  if (questioner != NULL) {
    set_has_questioner();
  } else {
    clear_has_questioner();
  }
  questioner_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), questioner);
  // @@protoc_insertion_point(field_set_allocated:muduo.Answer.questioner)
}

// required string answerer = 3;
inline bool Answer::has_answerer() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Answer::set_has_answerer() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Answer::clear_has_answerer() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Answer::clear_answerer() {
  answerer_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_answerer();
}
inline const ::std::string& Answer::answerer() const {
  // @@protoc_insertion_point(field_get:muduo.Answer.answerer)
  return answerer_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Answer::set_answerer(const ::std::string& value) {
  set_has_answerer();
  answerer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:muduo.Answer.answerer)
}
inline void Answer::set_answerer(const char* value) {
  set_has_answerer();
  answerer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:muduo.Answer.answerer)
}
inline void Answer::set_answerer(const char* value, size_t size) {
  set_has_answerer();
  answerer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:muduo.Answer.answerer)
}
inline ::std::string* Answer::mutable_answerer() {
  set_has_answerer();
  // @@protoc_insertion_point(field_mutable:muduo.Answer.answerer)
  return answerer_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Answer::release_answerer() {
  // @@protoc_insertion_point(field_release:muduo.Answer.answerer)
  clear_has_answerer();
  return answerer_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Answer::set_allocated_answerer(::std::string* answerer) {
  if (answerer != NULL) {
    set_has_answerer();
  } else {
    clear_has_answerer();
  }
  answerer_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), answerer);
  // @@protoc_insertion_point(field_set_allocated:muduo.Answer.answerer)
}

// repeated string solution = 4;
inline int Answer::solution_size() const {
  return solution_.size();
}
inline void Answer::clear_solution() {
  solution_.Clear();
}
inline const ::std::string& Answer::solution(int index) const {
  // @@protoc_insertion_point(field_get:muduo.Answer.solution)
  return solution_.Get(index);
}
inline ::std::string* Answer::mutable_solution(int index) {
  // @@protoc_insertion_point(field_mutable:muduo.Answer.solution)
  return solution_.Mutable(index);
}
inline void Answer::set_solution(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:muduo.Answer.solution)
  solution_.Mutable(index)->assign(value);
}
inline void Answer::set_solution(int index, const char* value) {
  solution_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:muduo.Answer.solution)
}
inline void Answer::set_solution(int index, const char* value, size_t size) {
  solution_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:muduo.Answer.solution)
}
inline ::std::string* Answer::add_solution() {
  // @@protoc_insertion_point(field_add_mutable:muduo.Answer.solution)
  return solution_.Add();
}
inline void Answer::add_solution(const ::std::string& value) {
  solution_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:muduo.Answer.solution)
}
inline void Answer::add_solution(const char* value) {
  solution_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:muduo.Answer.solution)
}
inline void Answer::add_solution(const char* value, size_t size) {
  solution_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:muduo.Answer.solution)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
Answer::solution() const {
  // @@protoc_insertion_point(field_list:muduo.Answer.solution)
  return solution_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
Answer::mutable_solution() {
  // @@protoc_insertion_point(field_mutable_list:muduo.Answer.solution)
  return &solution_;
}

// -------------------------------------------------------------------

// Empty

// optional int32 id = 1;
inline bool Empty::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Empty::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Empty::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Empty::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 Empty::id() const {
  // @@protoc_insertion_point(field_get:muduo.Empty.id)
  return id_;
}
inline void Empty::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:muduo.Empty.id)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace muduo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_query_2eproto__INCLUDED
