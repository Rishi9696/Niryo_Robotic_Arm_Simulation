
"use strict";

let GetTargetPose = require('./GetTargetPose.js')
let GetDynamicFrame = require('./GetDynamicFrame.js')
let GetWorkspaceRatio = require('./GetWorkspaceRatio.js')
let ManagePose = require('./ManagePose.js')
let ManageWorkspace = require('./ManageWorkspace.js')
let ManageDynamicFrame = require('./ManageDynamicFrame.js')
let GetWorkspaceMatrixPoses = require('./GetWorkspaceMatrixPoses.js')
let GetWorkspaceRobotPoses = require('./GetWorkspaceRobotPoses.js')
let GetWorkspacePoints = require('./GetWorkspacePoints.js')
let GetTransformPose = require('./GetTransformPose.js')
let GetPose = require('./GetPose.js')

module.exports = {
  GetTargetPose: GetTargetPose,
  GetDynamicFrame: GetDynamicFrame,
  GetWorkspaceRatio: GetWorkspaceRatio,
  ManagePose: ManagePose,
  ManageWorkspace: ManageWorkspace,
  ManageDynamicFrame: ManageDynamicFrame,
  GetWorkspaceMatrixPoses: GetWorkspaceMatrixPoses,
  GetWorkspaceRobotPoses: GetWorkspaceRobotPoses,
  GetWorkspacePoints: GetWorkspacePoints,
  GetTransformPose: GetTransformPose,
  GetPose: GetPose,
};
