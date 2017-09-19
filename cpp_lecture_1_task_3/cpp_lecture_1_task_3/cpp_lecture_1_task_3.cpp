// cpp_lecture_1_task_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

struct person {
	char	sex;
	int		age;
	float	height;
};

enum sex {
	M,
	F
};

//person me;
//person me = {'M', 24, 174.5};


//me.age = 14;

int main()
{
	//std::cout << me.sex << me.age << me.height << std::endl;
	person me;
	std::cout << "Sex: M/F\t";
	std::cin >> me.sex;

	std::cout << "Age: [int]\t";
	std::cin >> me.age;

	std::cout << "height: [float]\t";
	std::cin >> me.height;

	std::cout << "Sex:\t"	<< me.sex		<< std::endl;
	std::cout << "Age:\t"	<< me.age		<< std::endl;
	std::cout << "Height:\t"<< me.height	<< std::endl;

    return 0;
}
