// List.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <list>

int main()
{
	//Creates the values
	int studentID[] = { 226536,226432,224528,228645,228756,229845,221156,229754,224254,221388 };
	//How many of the values will be displayed.
	std::list<int> studentList(studentID, studentID + 10);

	std::cout << "Student ID number: ";
	//Returns begining and end interators.
	for (std::list<int>::iterator it = studentList.begin(); it != studentList.end(); ++it) std::cout << ' ' << *it;

	//Pause Function
	int pause;
	pause = 0;
	std::cin >> pause;

	return 0;
}