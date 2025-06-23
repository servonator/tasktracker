#include <iostream>
#include <fstream>
#include <sstream>
#include <string>


int main() {
	std::string path = "tasks.json";
	std::fstream file;
	std::string task = "Heute musst du noch zur Arbeit.";
	
	file.open(path);
	file << task;

	if (!file.is_open()) {
		file.clear();
		file.open(path, std::ios::out);
		file.close();
		file.open(path);
	}

	/* std::cout << "file.is_open() = " << file.is_open() << '\n';
	std::cout << "file.good() = " << file.good() << '\n'; */

	return 0;
}