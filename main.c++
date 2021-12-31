#include <iostream>
#include <fstream>
#include <string>
#include <deque>

int main() {
	std::string fileName;
	std::string fileDirect;
	std::cout << "Input file directory\n";
	std::cin >> fileDirect;
	std::cout << "Input file name\n";
	std::cin >> fileName;

	std::ifstream file;
	file.open(fileDirect + fileName);
	
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
