// cpp_lecture_1_task_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

enum sex {
	M,
	F
};

struct person {
	sex		sex;
	int		age;
	float	height;
};


int main()
{
	//std::cout << me.sex << me.age << me.height << std::endl;
	person me;

	char inputSex;
	std::cout << "Sex: M/F\t";
	std::cin >> inputSex;
	switch (inputSex)
	{
		case 'M'	: me.sex = M; break;
		case 'm'	: me.sex = M; break;
		case 'F'	: me.sex = F; break;
		case 'f'	: me.sex = F; break;
		default: "Dafuq!?"; break;
	}

	std::cout << "Age: [int]\t";
	std::cin >> me.age;

	std::cout << "height: [float]\t";
	std::cin >> me.height;
	
	std::cout << "Sex:\t";
	if (me.sex == M)
	{
		std::cout << "M (male)" << std::endl;
	}
	else if (me.sex == F)
	{
		std::cout << "F (female)" << std::endl;
	}
	else
	{
		std::cout << "The internets won't like you :|" << std::endl;
	}
	std::cout << "Age:\t"	<< me.age		<< std::endl;;
	std::cout << "Height:\t"<< me.height	<< std::endl;

    return 0;
}
