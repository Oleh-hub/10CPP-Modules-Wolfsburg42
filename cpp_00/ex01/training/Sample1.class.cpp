/* 
	Definition of Constructor and Destractor wrong way to 
 */
#include <iostream>
#include "Sample1.class.hpp"

Sample1::Sample1(char p1, int p2, float p3) {
	
	std::cout << "Constructor is called" << std::endl;
	
	this->a1 = p1;
	std::cout << "this->a1 = " << this->a1 << std::endl;

	this->a2 = p2;
	std::cout << "this->a2 = " << this->a2 << std::endl;

	this->a3 = p3;
	std::cout << "this->a3 = " << this->a3 << std::endl;

	return;
}

Sample1::~Sample1(void) {

	std::cout << "Destractor is called" << std::endl;
	return;
}
