#include <iostream>
#include <fstream>
#include <string>
#include <deque>

int main(int args) {
	std::string fileName;
	std::cout << "Input file name\n";
	std::cin >> fileName;

	std::ifstream file;
	file.open(fileName);
	
	std::string fileOutput;
	if (file.is_open()) {
		while (!file.eof()) {
			file >> fileOutput;
			std::cout << fileOutput << std::endl;
		}
	}
	else {
		std::cout << "File couldn't open" << std::endl;
	}

	file.close();

	return 0;
}
