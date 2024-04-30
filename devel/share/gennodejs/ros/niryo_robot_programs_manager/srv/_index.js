
"use strict";

let GetProgram = require('./GetProgram.js')
let ExecuteProgram = require('./ExecuteProgram.js')
let GetProgramAutorunInfos = require('./GetProgramAutorunInfos.js')
let SetProgramAutorun = require('./SetProgramAutorun.js')
let GetProgramList = require('./GetProgramList.js')
let ManageProgram = require('./ManageProgram.js')

module.exports = {
  GetProgram: GetProgram,
  ExecuteProgram: ExecuteProgram,
  GetProgramAutorunInfos: GetProgramAutorunInfos,
  SetProgramAutorun: SetProgramAutorun,
  GetProgramList: GetProgramList,
  ManageProgram: ManageProgram,
};
