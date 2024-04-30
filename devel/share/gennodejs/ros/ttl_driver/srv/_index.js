
"use strict";

let ReadVelocityProfile = require('./ReadVelocityProfile.js')
let ReadCustomValue = require('./ReadCustomValue.js')
let WriteCustomValue = require('./WriteCustomValue.js')
let WritePIDValue = require('./WritePIDValue.js')
let WriteVelocityProfile = require('./WriteVelocityProfile.js')
let ReadPIDValue = require('./ReadPIDValue.js')

module.exports = {
  ReadVelocityProfile: ReadVelocityProfile,
  ReadCustomValue: ReadCustomValue,
  WriteCustomValue: WriteCustomValue,
  WritePIDValue: WritePIDValue,
  WriteVelocityProfile: WriteVelocityProfile,
  ReadPIDValue: ReadPIDValue,
};
