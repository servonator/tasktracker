#include "taskAction.h"
#include "TaskStatus.h"

void taskAction::actionAdd(const std::string& description)
{
	std::vector <Task> tasks;
	std::ifstream file("tasks.json");
	if (file.is_open()) {
		std::stringstream buffer;
		buffer << file.rdbuf();
		std::string taskContent = buffer.str();
		//WIP
	}
}

void taskAction::actionUpdate(int argc, char* argv[])
{
}

void taskAction::actionDelete(int argc, char* argv[])
{
}

void taskAction::actionMark(int argc, char* argv[])
{
}

void taskAction::actionList(int argc, char* argv[])
{
}
