// Richter Scale Conversion.cpp : Defines the entry point for the console application.
//

//All credit for the idea and documents given to the material at 
//http://www.cse.msu.edu/~cse231/PracticeOfComputingUsingPython/

#include "stdafx.h"
#include <iostream>			//for input/output
#include <iomanip>			//to format the output



//prototyping our two functions

int main()
{

	//first we create a variable to hold the richter scale value

	double richterValue;
	long double joules;
	long double tonsOfTnt;
	

	std::cout << "Enter the Richter Scale value:";
	std::cin >> richterValue;
	std::cout << "\n";

	//the next step is to do calculations

	joules = pow(10, (1.5 * richterValue) + 4.8);	//converts to joules
	tonsOfTnt = joules / (4.184 * pow(10, 9));		//converts to tonsOfTnt
	
	//now we display it, keeping formatting in mind

	std::cout << "\n" << richterValue << " on the Richter scale" << std::endl
		<< "Is equivalent to:\n\n" << std::fixed << joules << " Joules" << std::endl << tonsOfTnt << " tons of TNT";

	std::cout << "\n\n\nPress enter to exit.";

	std::cin.ignore();			//flushes the input buffer
	std::cin.get();				//pauses the program
	
    return 0;
}