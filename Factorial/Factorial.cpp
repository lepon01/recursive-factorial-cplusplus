// Factorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

unsigned long long factorial(unsigned long long number) {
	if (number == 0) {
		// Base scenario
		// 0! is 1
		return 1;
	}
	else {
		// Return the next factorial, multiplied by the current number
		// 3! = 2! * 3
		// 2! = 1! * 2
		// 1! = 0! * 1
		// 0! = 1
		return factorial(number - 1) * number;
	}
}

int main(int argc, char *argv[])
{
	// If there are too many or too little arguments, exit
	if (argc != 2) {
		std::cout << "Invalid number of arguments.\n"
				  << "Usage: 'factorial.exe [number]'\n";
		return -1;
	}
	else {
		// Parse the integer
		unsigned long long number = atoi(argv[1]);

		// Exit if a negative number was given
		if (number < 0) {
			std::cout << "Negative numbers are not supported.\n";
			return -2;
		}
		else {
			// Print the factorial output
			std::cout << factorial(number);
			return 0;
		}
	}
}
