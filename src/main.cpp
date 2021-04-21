#include <Arduino.h>

/*
The general scheme will be like this

Get sensor data

Error check sensor data

Write data to log

Transmit the logged raw data to some store for possible later use eg. google
sheets

Generate a dashboard type of interface that gives useful information eg. trends,
graphs, averages

Be able to access that dashboard from mobile phone / base station / web portal
*/

void startSerial() { ; }
void startTwoWire() { ; }
void initializeSensors() { ; }
void initializeCamera() { ; }

void setup() {
  startSerial();
  startTwoWire();
  initializeSensors();
  initializeCamera();
}

// Functions that get sensor data
int getRelativeHumidity() { ; }
float getAirTemperature() { ; }
int getInternalHumidity() { ; }
int getInternalTemperature() { ; }
int getProbeTemperature() { ; }
int getCO2Concentration() { ; }
int getIlluminanceVisible() { ; }
int getIlluminanceUV() { ; }
int getTime() { ; }
float getBatteryVoltage() { ; }
void takePicture() { ; }

void errorCheckSensorData() { ; }

void writeDataLog() { ; }

// Functions that modify sensor data
void appendEnvironmentalsToPicture() { ; }
int averageSensorDataInt(int numberOfSamplesToAverage, int samples) { ; }
float averageSensorDataFloat(int numberOfSamplesToAverage, float samples) { ; }

void DisplayDataLogOnboardDisplay() { ; }

// Sending the Data log over various channels
void sendDataLogToGoogleSheets() { ; }
void hostDataLogLAN() { ; }

void sendDataLogToBaseStation() { ; }
void sendDataLogOverBluetooth() { ; }
void sendDataLogOverWiFi() { ; }
void hostDataLogWAN() { ; }
void sendDataLogOverGSM() { ; }
void sendDataLogOverLoRaWAN() { ; }
void hostDataLogUSBStorageVolume() { ; }
void writeDataLogToSDCard() { ; }

// User defined operating parameters
void userDefineCameraParameters() { ; }
void userSetSensorSampleRates() { ; }
void userSetPictureDataAppend() { ; }

void makeGraph() { ; }
void userSetGraphParameters() { ; }
void DisplayGraphOnboardDisplay() { ; }

void loop() { ; }