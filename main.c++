#include <iostream>
#include <fstream>
#include <vector>

enum Evens { two = 2, four = 4, six = 6 };

int main() {
	Evens e = two;
	std::cout << e << std::endl;
}
