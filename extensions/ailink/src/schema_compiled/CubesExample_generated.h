// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_CUBESEXAMPLE_CUBESEXAMPLE_H_
#define FLATBUFFERS_GENERATED_CUBESEXAMPLE_CUBESEXAMPLE_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 23 &&
              FLATBUFFERS_VERSION_MINOR == 5 &&
              FLATBUFFERS_VERSION_REVISION == 26,
             "Non-compatible flatbuffers version included");

namespace CubesExample {

struct Vector2;

struct Ray;

struct SetupMessage;
struct SetupMessageBuilder;

struct InputMessage;
struct InputMessageBuilder;

struct OutputMessage;
struct OutputMessageBuilder;

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(4) Vector2 FLATBUFFERS_FINAL_CLASS {
 private:
  float x_;
  float y_;

 public:
  Vector2()
      : x_(0),
        y_(0) {
  }
  Vector2(float _x, float _y)
      : x_(::flatbuffers::EndianScalar(_x)),
        y_(::flatbuffers::EndianScalar(_y)) {
  }
  float x() const {
    return ::flatbuffers::EndianScalar(x_);
  }
  float y() const {
    return ::flatbuffers::EndianScalar(y_);
  }
};
FLATBUFFERS_STRUCT_END(Vector2, 8);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(4) Ray FLATBUFFERS_FINAL_CLASS {
 private:
  float distance_;
  uint8_t enemy_;
  int8_t padding0__;  int16_t padding1__;

 public:
  Ray()
      : distance_(0),
        enemy_(0),
        padding0__(0),
        padding1__(0) {
    (void)padding0__;
    (void)padding1__;
  }
  Ray(float _distance, bool _enemy)
      : distance_(::flatbuffers::EndianScalar(_distance)),
        enemy_(::flatbuffers::EndianScalar(static_cast<uint8_t>(_enemy))),
        padding0__(0),
        padding1__(0) {
    (void)padding0__;
    (void)padding1__;
  }
  float distance() const {
    return ::flatbuffers::EndianScalar(distance_);
  }
  bool enemy() const {
    return ::flatbuffers::EndianScalar(enemy_) != 0;
  }
};
FLATBUFFERS_STRUCT_END(Ray, 8);

struct SetupMessage FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef SetupMessageBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_IS_HUNTER = 4
  };
  bool is_hunter() const {
    return GetField<uint8_t>(VT_IS_HUNTER, 0) != 0;
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_IS_HUNTER, 1) &&
           verifier.EndTable();
  }
};

struct SetupMessageBuilder {
  typedef SetupMessage Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_is_hunter(bool is_hunter) {
    fbb_.AddElement<uint8_t>(SetupMessage::VT_IS_HUNTER, static_cast<uint8_t>(is_hunter), 0);
  }
  explicit SetupMessageBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<SetupMessage> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<SetupMessage>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<SetupMessage> CreateSetupMessage(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    bool is_hunter = false) {
  SetupMessageBuilder builder_(_fbb);
  builder_.add_is_hunter(is_hunter);
  return builder_.Finish();
}

struct InputMessage FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef InputMessageBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_RAYS = 4
  };
  const ::flatbuffers::Vector<const CubesExample::Ray *> *rays() const {
    return GetPointer<const ::flatbuffers::Vector<const CubesExample::Ray *> *>(VT_RAYS);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_RAYS) &&
           verifier.VerifyVector(rays()) &&
           verifier.EndTable();
  }
};

struct InputMessageBuilder {
  typedef InputMessage Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_rays(::flatbuffers::Offset<::flatbuffers::Vector<const CubesExample::Ray *>> rays) {
    fbb_.AddOffset(InputMessage::VT_RAYS, rays);
  }
  explicit InputMessageBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<InputMessage> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<InputMessage>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<InputMessage> CreateInputMessage(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::Vector<const CubesExample::Ray *>> rays = 0) {
  InputMessageBuilder builder_(_fbb);
  builder_.add_rays(rays);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<InputMessage> CreateInputMessageDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<CubesExample::Ray> *rays = nullptr) {
  auto rays__ = rays ? _fbb.CreateVectorOfStructs<CubesExample::Ray>(*rays) : 0;
  return CubesExample::CreateInputMessage(
      _fbb,
      rays__);
}

struct OutputMessage FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef OutputMessageBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_MOVEMENT_DIRECTION = 4
  };
  const CubesExample::Vector2 *movement_direction() const {
    return GetStruct<const CubesExample::Vector2 *>(VT_MOVEMENT_DIRECTION);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<CubesExample::Vector2>(verifier, VT_MOVEMENT_DIRECTION, 4) &&
           verifier.EndTable();
  }
};

struct OutputMessageBuilder {
  typedef OutputMessage Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_movement_direction(const CubesExample::Vector2 *movement_direction) {
    fbb_.AddStruct(OutputMessage::VT_MOVEMENT_DIRECTION, movement_direction);
  }
  explicit OutputMessageBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<OutputMessage> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<OutputMessage>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<OutputMessage> CreateOutputMessage(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const CubesExample::Vector2 *movement_direction = nullptr) {
  OutputMessageBuilder builder_(_fbb);
  builder_.add_movement_direction(movement_direction);
  return builder_.Finish();
}

inline const CubesExample::SetupMessage *GetSetupMessage(const void *buf) {
  return ::flatbuffers::GetRoot<CubesExample::SetupMessage>(buf);
}

inline const CubesExample::SetupMessage *GetSizePrefixedSetupMessage(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<CubesExample::SetupMessage>(buf);
}

inline bool VerifySetupMessageBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<CubesExample::SetupMessage>(nullptr);
}

inline bool VerifySizePrefixedSetupMessageBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<CubesExample::SetupMessage>(nullptr);
}

inline void FinishSetupMessageBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<CubesExample::SetupMessage> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedSetupMessageBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<CubesExample::SetupMessage> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace CubesExample

#endif  // FLATBUFFERS_GENERATED_CUBESEXAMPLE_CUBESEXAMPLE_H_
