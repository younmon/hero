// Auto-generated. Do not edit!

// (in-package rm_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class EngineerFeedback {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.total_steps = null;
      this.finished_step = null;
      this.current_step = null;
    }
    else {
      if (initObj.hasOwnProperty('total_steps')) {
        this.total_steps = initObj.total_steps
      }
      else {
        this.total_steps = 0;
      }
      if (initObj.hasOwnProperty('finished_step')) {
        this.finished_step = initObj.finished_step
      }
      else {
        this.finished_step = 0;
      }
      if (initObj.hasOwnProperty('current_step')) {
        this.current_step = initObj.current_step
      }
      else {
        this.current_step = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type EngineerFeedback
    // Serialize message field [total_steps]
    bufferOffset = _serializer.uint8(obj.total_steps, buffer, bufferOffset);
    // Serialize message field [finished_step]
    bufferOffset = _serializer.uint8(obj.finished_step, buffer, bufferOffset);
    // Serialize message field [current_step]
    bufferOffset = _serializer.string(obj.current_step, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type EngineerFeedback
    let len;
    let data = new EngineerFeedback(null);
    // Deserialize message field [total_steps]
    data.total_steps = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [finished_step]
    data.finished_step = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [current_step]
    data.current_step = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.current_step);
    return length + 6;
  }

  static datatype() {
    // Returns string type for a message object
    return 'rm_msgs/EngineerFeedback';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '87397c03e34e8b8835ff0de452ee02e3';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    # feedback
    uint8 total_steps
    uint8 finished_step
    string current_step
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new EngineerFeedback(null);
    if (msg.total_steps !== undefined) {
      resolved.total_steps = msg.total_steps;
    }
    else {
      resolved.total_steps = 0
    }

    if (msg.finished_step !== undefined) {
      resolved.finished_step = msg.finished_step;
    }
    else {
      resolved.finished_step = 0
    }

    if (msg.current_step !== undefined) {
      resolved.current_step = msg.current_step;
    }
    else {
      resolved.current_step = ''
    }

    return resolved;
    }
};

module.exports = EngineerFeedback;
