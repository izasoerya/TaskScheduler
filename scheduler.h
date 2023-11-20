#ifndef TASKSCHEDULER_H
#define TASKSCHEDULER_H

#include <Arduino.h>

class TaskScheduler {
private:
    typedef void (*TaskFunction)();  // Define a typedef for the function pointer type
    String name;
    uint16_t delay;
    uint8_t idTask;
    uint32_t prevMillis = 0;
    bool isSuspended = false;
    TaskFunction taskFunc;

public:
    TaskScheduler(uint8_t idTask, String name, uint16_t delay, TaskFunction taskFunc);
    ~TaskScheduler();
    void runTask();
    void suspendTask();
    void resumeTask();
    void suspendAllTask();
};

#endif // TASKSCHEDULER_H
