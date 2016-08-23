/*
 *  Copyright (c) 2016, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
namespace facebook {
namespace memcache {
namespace test {

inline void ManyFields::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeBinaryField(1 /* field id */, buf1());
  writer.writeBinaryField(2 /* field id */, buf2());
  writer.writeBinaryField(3 /* field id */, buf3());
  writer.writeBinaryField(4 /* field id */, buf4());
  writer.writeBinaryField(5 /* field id */, buf5());
  writer.writeBinaryField(6 /* field id */, buf6());
  writer.writeBinaryField(7 /* field id */, buf7());
  writer.writeBinaryField(8 /* field id */, buf8());
  writer.writeBinaryField(9 /* field id */, buf9());
  writer.writeBinaryField(10 /* field id */, buf10());
  writer.writeBinaryField(11 /* field id */, buf11());
  writer.writeBinaryField(12 /* field id */, buf12());
  writer.writeBinaryField(13 /* field id */, buf13());
  writer.writeBinaryField(14 /* field id */, buf14());
  writer.writeBinaryField(15 /* field id */, buf15());
  writer.writeBinaryField(16 /* field id */, buf16());
  writer.writeBinaryField(17 /* field id */, buf17());
  writer.writeBinaryField(18 /* field id */, buf18());
  writer.writeBinaryField(19 /* field id */, buf19());
  writer.writeBinaryField(20 /* field id */, buf20());
  writer.writeBinaryField(21 /* field id */, buf21());
  writer.writeBinaryField(22 /* field id */, buf22());
  writer.writeBinaryField(23 /* field id */, buf23());
  writer.writeBinaryField(24 /* field id */, buf24());
  writer.writeBinaryField(25 /* field id */, buf25());
  writer.writeBinaryField(26 /* field id */, buf26());
  writer.writeBinaryField(27 /* field id */, buf27());
  writer.writeBinaryField(28 /* field id */, buf28());
  writer.writeBinaryField(29 /* field id */, buf29());
  writer.writeBinaryField(30 /* field id */, buf30());
  writer.writeBinaryField(31 /* field id */, buf31());
  writer.writeBinaryField(32 /* field id */, buf32());
  writer.writeBinaryField(33 /* field id */, buf33());
  writer.writeBinaryField(34 /* field id */, buf34());
  writer.writeBinaryField(35 /* field id */, buf35());
  writer.writeBinaryField(36 /* field id */, buf36());
  writer.writeBinaryField(37 /* field id */, buf37());
  writer.writeBinaryField(38 /* field id */, buf38());
  writer.writeBinaryField(39 /* field id */, buf39());
  writer.writeBinaryField(40 /* field id */, buf40());
  writer.writeStructEnd();
  writer.writeStop();
}

inline void ManyFields::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        buf1() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 2: {
        buf2() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 3: {
        buf3() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 4: {
        buf4() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 5: {
        buf5() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 6: {
        buf6() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 7: {
        buf7() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 8: {
        buf8() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 9: {
        buf9() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 10: {
        buf10() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 11: {
        buf11() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 12: {
        buf12() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 13: {
        buf13() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 14: {
        buf14() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 15: {
        buf15() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 16: {
        buf16() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 17: {
        buf17() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 18: {
        buf18() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 19: {
        buf19() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 20: {
        buf20() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 21: {
        buf21() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 22: {
        buf22() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 23: {
        buf23() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 24: {
        buf24() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 25: {
        buf25() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 26: {
        buf26() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 27: {
        buf27() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 28: {
        buf28() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 29: {
        buf29() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 30: {
        buf30() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 31: {
        buf31() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 32: {
        buf32() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 33: {
        buf33() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 34: {
        buf34() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 35: {
        buf35() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 36: {
        buf36() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 37: {
        buf37() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 38: {
        buf38() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 39: {
        buf39() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      case 40: {
        buf40() = reader.readBinaryField<folly::IOBuf>();
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

} // test
} // memcache
} // facebook
