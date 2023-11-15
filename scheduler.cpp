#include "scheduler.h"

TaskScheduler::TaskScheduler(uint8_t userId, String userName, uint16_t userDelay, TaskFunction userTask)
{
    this -> idTask = idTask;
    this -> name = name;
    this -> delay = delay;
    this -> taskFunc = taskFunc;
}

void TaskScheduler::runTask()
{
    if(millis() - prevMillis > delay && !isSuspended)
    {
        taskFunc();
        prevMillis = millis();
    }  
}

void TaskScheduler::suspendTask()
{
    isSuspended = true;
}

void TaskScheduler::resumeTask()
{
    isSuspended = false;
}