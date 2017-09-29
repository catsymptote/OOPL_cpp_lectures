// cpp_lecture_1_task_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	int num = 42;
	int *p;

	p = &num;	// p points to the reference (address) of num
	std::cout << *p << std::endl;	// Points to num

	++*p;	// Does not like *p++; for whatever reason
	std::cout << num << std::endl;
	
	num--;	// Or --num;
	std::cout << *p << std::endl;	// Points to num
	std::cout << p << std::endl;	// Points to address of num
    return 0;
}
