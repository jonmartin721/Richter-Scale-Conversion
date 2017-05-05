// Richter Scale Conversion.cpp : Defines the entry point for the console application.
//

//All credit for the idea and documents given to the material at 
//http://www.cse.msu.edu/~cse231/PracticeOfComputingUsingPython/

#include "stdafx.h"
#include <iostream>
#include <cmath>

//prototyping our two functions

int main()
{

	//first we create a variable to hold the richter scale value

	double richterValue;
	long double joules;
	long double tnt;

	std::cout << "Enter the Richter Scale value:";
	std::cin >> richterValue;
	std::cout << "\n";

	//the next step is to calculate the joules of enery created by the earthquake. Let;s use a function.

	joules = pow(10, (1.5 * richterValue) + 4.8);	//converts to joules
	tnt = joules / pow(4.184 * 10, 9);				//converts to tnt
	
	std::cout << "\n" << richterValue << " on the Richter scale" << std::endl
		<< "Is equivalent to:\n\n" << joules << " Joules\n" << std::endl << tnt << " tons of TNT";

	std::cin.ignore();
	std::cin.get();

    return 0;
}