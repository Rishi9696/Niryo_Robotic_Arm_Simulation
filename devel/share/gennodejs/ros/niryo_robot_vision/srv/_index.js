
"use strict";

let ObjDetection = require('./ObjDetection.js')
let DebugColorDetection = require('./DebugColorDetection.js')
let TakePicture = require('./TakePicture.js')
let Visualization = require('./Visualization.js')
let DebugMarkers = require('./DebugMarkers.js')
let SetImageParameter = require('./SetImageParameter.js')

module.exports = {
  ObjDetection: ObjDetection,
  DebugColorDetection: DebugColorDetection,
  TakePicture: TakePicture,
  Visualization: Visualization,
  DebugMarkers: DebugMarkers,
  SetImageParameter: SetImageParameter,
};
