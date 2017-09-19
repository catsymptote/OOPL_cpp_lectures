// cpp_lecture_1_task_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

enum class numberType { even = 0, odd = 1 };

void numberTypeMatrixPrinter(numberType products[10][10]);


int main()
{
	// Make the enum matrix
	numberType numberTypeMatrix[10][10];
	for (size_t i = 0; i < 10; i++)	// loop through matrix
	{
		for (size_t j = 0; j < 10; j++)
		{
			if ((i+1)*(j+1) % 2 == 0)	// if even
			{
				numberTypeMatrix[i][j] = numberType::even;
			}
			else	// else is odd
			{
				numberTypeMatrix[i][j] = numberType::odd;
			}
		}
	}
	// Print out the numberType (odd/even) results
	numberTypeMatrixPrinter(numberTypeMatrix);
	return 0;
}

void numberTypeMatrixPrinter(numberType numberTypeMatrix[10][10])
{
	for (size_t i = 0; i < 10; i++)
	{
		std::cout << i+1 << '\t';
		for (size_t j = 0; j < 10; j++)	// loop through matrix
		{
			if (j <= i)
			{
				if (static_cast<int>(numberTypeMatrix[i][j]) == 0)
				{	// if even
					std::cout << "even\t";
				}
				else
				{	// else odd
					std::cout << "odd\t";
				}
			}
			else
			{
				break;
			}
		}
		std::cout << std::endl;
	}
	std::cout << "\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10" << std::endl;
}
