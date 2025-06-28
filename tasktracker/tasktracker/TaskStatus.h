#pragma once
#ifndef TASKSTATUS_HPP
#define TASKSTATUS_HPP

#include <iostream>
#include <string>
#include <ctime>

enum class TaskStatus
{
	TODO, IN_PROGRESS, DONE
};

//tasks have more diverse datatypes so define a struct
struct Task {
	int id;
	std::string description;
	TaskStatus status;
	std::time_t created_at;
	std::time_t updated_at;
};

std::string TaskStatus_toString(TaskStatus status);
TaskStatus string_toTaskStatus(const std::string& strstatus);

#endif

