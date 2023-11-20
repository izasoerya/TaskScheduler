#include <Arduino.h>
#include "scheduler.h"

void doTask1() {
    Serial.println("Task 1");
}
void doTask2() {
    Serial.println("Task 2");
}

TaskScheduler task1(1, "TASK1", 1000, doTask1);
TaskScheduler task2(2, "TASK2", 1000, doTask2);

void main() {
    Serial.begin(115200);
}

void loop() {
    task1.runTask();
}