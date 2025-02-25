#include"utils.cpp"
#include<iostream>
int main() {
	int a = 1;
	int b = 3;
	std::cout << "Sum" << " " << summ(a, b) << std::endl;
	std::cout << summ(a, b) << std::endl;
	std::cout << sub(a, b) << std::endl;
	std::cout << multiply(a, b);
	return 0;
}