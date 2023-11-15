#ifndef TASKSCHEDULER_H
#define TASKSCHEDULER_H

#include <Arduino.h>
typedef void (*TaskFunction)();  // Define a typedef for the function pointer type

class TaskScheduler {
private:
    String taskName;
    uint16_t taskDelay;
    uint8_t taskId;
    uint32_t prevMillis = 0;
    bool isSuspended = false;
    TaskFunction taskFunc;

public:
    TaskScheduler(uint8_t userId, String userName, uint16_t userDelay, TaskFunction userTask);
    void runTask();
    void suspendTask();
    void resumeTask();
};

#endif // TASKSCHEDULER_H
