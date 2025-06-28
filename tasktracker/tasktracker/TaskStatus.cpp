#include "TaskStatus.h"

std::string TaskStatus_toString(TaskStatus status)
{
    switch (status) {
        case TaskStatus::DONE:
            return "done";
        case TaskStatus::TODO:
            return "todo";
        case TaskStatus::IN_PROGRESS:
            return "in progress";
        default:
            return "unknown";
    }
}

TaskStatus string_toTaskStatus(const std::string& strstatus)
{
    if (strstatus == "todo") {
        return TaskStatus::TODO;
    }
    else if (strstatus == "done") {
        return TaskStatus::DONE;
    }
    else if (strstatus == "in progress") {
        return TaskStatus::IN_PROGRESS;
    }
    else {
        return TaskStatus::TODO;
    }
}
