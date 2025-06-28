#pragma once
#ifndef TASKACTION_HPP
#define TASKACTION_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <ctime>
#include <vector>

namespace taskAction
{
	void actionAdd(const std::string& description);
	void actionUpdate(int argc, char* argv[]);
	void actionDelete(int argc, char* argv[]);
	void actionMark(int argc, char* argv[]);
	void actionList(int argc, char* argv[]);

};

#endif
