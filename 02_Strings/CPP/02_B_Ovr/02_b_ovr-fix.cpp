#include <iostream>

int main() {
	char buf[12];
	std::cin.width(12);
	std::cin >> buf;
	std::cout << "echo: " << buf << ";" << "\n";
}
