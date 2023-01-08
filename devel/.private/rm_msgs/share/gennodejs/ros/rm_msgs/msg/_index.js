
"use strict";

let DbusData = require('./DbusData.js');
let LpData = require('./LpData.js');
let ChassisCmd = require('./ChassisCmd.js');
let TofRadarData = require('./TofRadarData.js');
let GimbalDesError = require('./GimbalDesError.js');
let SuperCapacitor = require('./SuperCapacitor.js');
let ShootCmd = require('./ShootCmd.js');
let ActuatorState = require('./ActuatorState.js');
let BalanceState = require('./BalanceState.js');
let GimbalCmd = require('./GimbalCmd.js');
let GpioData = require('./GpioData.js');
let MovingAverageData = require('./MovingAverageData.js');
let KalmanData = require('./KalmanData.js');
let TargetDetection = require('./TargetDetection.js');
let TargetDetectionArray = require('./TargetDetectionArray.js');
let TrackData = require('./TrackData.js');
let IcraBuffDebuffZoneStatus = require('./IcraBuffDebuffZoneStatus.js');
let EventData = require('./EventData.js');
let CapacityData = require('./CapacityData.js');
let PowerHeatData = require('./PowerHeatData.js');
let StateCmd = require('./StateCmd.js');
let RfidStatus = require('./RfidStatus.js');
let DartClientCmd = require('./DartClientCmd.js');
let DartStatus = require('./DartStatus.js');
let RobotHurt = require('./RobotHurt.js');
let GameRobotStatus = require('./GameRobotStatus.js');
let SupplyProjectileAction = require('./SupplyProjectileAction.js');
let ManualToReferee = require('./ManualToReferee.js');
let ShootData = require('./ShootData.js');
let DartRemainingTime = require('./DartRemainingTime.js');
let BulletRemaining = require('./BulletRemaining.js');
let GameStatus = require('./GameStatus.js');
let RadarData = require('./RadarData.js');
let EngineerCmd = require('./EngineerCmd.js');
let GameRobotHp = require('./GameRobotHp.js');
let EngineerActionFeedback = require('./EngineerActionFeedback.js');
let EngineerFeedback = require('./EngineerFeedback.js');
let EngineerResult = require('./EngineerResult.js');
let EngineerActionResult = require('./EngineerActionResult.js');
let EngineerGoal = require('./EngineerGoal.js');
let EngineerActionGoal = require('./EngineerActionGoal.js');
let EngineerAction = require('./EngineerAction.js');

module.exports = {
  DbusData: DbusData,
  LpData: LpData,
  ChassisCmd: ChassisCmd,
  TofRadarData: TofRadarData,
  GimbalDesError: GimbalDesError,
  SuperCapacitor: SuperCapacitor,
  ShootCmd: ShootCmd,
  ActuatorState: ActuatorState,
  BalanceState: BalanceState,
  GimbalCmd: GimbalCmd,
  GpioData: GpioData,
  MovingAverageData: MovingAverageData,
  KalmanData: KalmanData,
  TargetDetection: TargetDetection,
  TargetDetectionArray: TargetDetectionArray,
  TrackData: TrackData,
  IcraBuffDebuffZoneStatus: IcraBuffDebuffZoneStatus,
  EventData: EventData,
  CapacityData: CapacityData,
  PowerHeatData: PowerHeatData,
  StateCmd: StateCmd,
  RfidStatus: RfidStatus,
  DartClientCmd: DartClientCmd,
  DartStatus: DartStatus,
  RobotHurt: RobotHurt,
  GameRobotStatus: GameRobotStatus,
  SupplyProjectileAction: SupplyProjectileAction,
  ManualToReferee: ManualToReferee,
  ShootData: ShootData,
  DartRemainingTime: DartRemainingTime,
  BulletRemaining: BulletRemaining,
  GameStatus: GameStatus,
  RadarData: RadarData,
  EngineerCmd: EngineerCmd,
  GameRobotHp: GameRobotHp,
  EngineerActionFeedback: EngineerActionFeedback,
  EngineerFeedback: EngineerFeedback,
  EngineerResult: EngineerResult,
  EngineerActionResult: EngineerActionResult,
  EngineerGoal: EngineerGoal,
  EngineerActionGoal: EngineerActionGoal,
  EngineerAction: EngineerAction,
};
