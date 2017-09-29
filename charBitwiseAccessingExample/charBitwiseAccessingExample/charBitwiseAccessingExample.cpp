// charBitwiseAccessingExample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"	// Because Visual Studio
#include <iostream>
#include <bitset>	// For making char into a bitset


int main()
{
	/// Making the numbers
	unsigned char byte1 = 128;
	unsigned char byte2 = 64;
	std::cout
		<< "The char values in question are 128 and 64 respectively.\n"
		<< std::endl;


	/// Print out as a char
	std::cout << "Print out as a char" << std::endl;
	std::cout << byte1 << std::endl;
	std::cout << byte2 << std::endl;
	std::cout << std::endl;

	/// Print out as the number value
	std::cout << "Print out as the number value" << std::endl;
	std::cout << static_cast<unsigned int>(byte1) << std::endl;
	std::cout << static_cast<unsigned int>(byte2) << std::endl;
	std::cout << std::endl;

	/// Make and print out as bitset (bit by bit)
	std::cout << "Make and print out as bitset (bit by bit)" << std::endl;
	std::bitset<8> byte1_bitset(byte1);
	std::bitset<8> byte2_bitset(byte2);
	std::cout << byte1_bitset << std::endl;
	std::cout << byte2_bitset << std::endl;

	return 0;
}