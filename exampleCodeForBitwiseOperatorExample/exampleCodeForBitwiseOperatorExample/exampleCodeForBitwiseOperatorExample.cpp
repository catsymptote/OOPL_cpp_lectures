// exampleCodeForBitwiseOperatorExample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"	// Because Visual Studio
#include <iostream>
#include <bitset>	// For making char into a bitset


void print(char character, const std::string& input);


int main()
{
	unsigned char byte1 = 128;
	unsigned char byte2 = 64;
	unsigned char byte3;


	print(byte1, "byte1:\t128");
	print(byte2, "byte2:\t64");

	std::cout << std::endl;

	print(~byte1, "~byte1");
	print(~~byte1, "~~byte1");
	print(byte1 & byte2, "byte1 & byte2 \t- Bitwise AND");
	print(byte1 | byte2, "byte1 | byte2 \t- Bitwise OR");
	print(byte1 >> 2, "byte1 >> 2");
	print(byte2 << 1, "byte2 << 1");
	print(byte1 ^byte2, "byte1 ^byte2 \t- Exclusive OR");

	std::cout << std::endl;

	signed char b = 138;
	signed char br;
	print(b, "signed char b = 138");
	print(br = b >> 2, "br = b >> 2");

	return 0;
}

void print(char character, const std::string& inputText)
{
	std::bitset<8> charAsBitset(character);
	unsigned int charAsInt = static_cast<unsigned int>(character);
	std::cout << charAsBitset << "\t" << inputText << std::endl;
}
