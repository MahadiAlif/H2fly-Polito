#include <TaskManagerIO.h>

const int lm35Pin = A0;

void readTemperatureTask();

void setup() {
 
  Serial.begin(9600);
  taskManager.scheduleFixedRate(500, readTemperatureTask);
}

void loop() {
  taskManager.runLoop();
}

void readTemperatureTask() {
  int rawValue = analogRead(lm35Pin);
  float voltage = (rawValue / 1024.0) * 3.3;
  float temperatureC = voltage / 0.01;
  
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");
}
