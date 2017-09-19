// cpp_lecture_1_task_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"	// When using VS
#include <iostream>

float pi = 3.14;	// Global const

float area1(float radius);
float area2(float radius);


int main()
{
	// Declare and get input value for radius
	float radius;
	std::cout << "Input the radius of the circle: ";
	std::cin >> radius;

	// Print out area based on global const
	std::cout << "Result from area1():\t";
	std::cout << area1(radius) << std::endl;

	// Print out area based on local const
	std::cout << "Result from area2():\t";
	std::cout << area2(radius) << std::endl;
	return 0;
}

float area1(float radius)
{
	return (2 * pi * radius);
}

float area2(float radius)
{
	float const pi = 3.14159;	// Local const
	return (2 * pi * radius);
}
