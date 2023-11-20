#ifndef TASKSCHEDULER_H
#define TASKSCHEDULER_H

#include <Arduino.h>

class TaskScheduler {
private:
    String name;
    uint16_t delay;
    uint8_t idTask;
    uint32_t prevMillis = 0;
    void (*taskFunc)();
    bool isSuspended = false;

public:
    TaskScheduler(uint8_t idTask, String name, uint16_t delay, void (*taskFunc)());
    ~TaskScheduler();
    void runTask();
    void suspendTask();
    void resumeTask();
    void suspendAllTask();
};

#endif // TASKSCHEDULER_H
