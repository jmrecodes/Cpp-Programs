#include <iostream>
#include <string>

// Include a user-defined header file, uses quotes instead of <> to point to the same directory as the .cpp file
#include "Calculator.ext.h"

using namespace std;
int main() {
	
	// Declare variables needed
	string checkContinue; // for checking if the user will continue or not
	double num1, num2; // 2 values to do operations on
	
	cout << "This Calculator program will do 4 operations on 2 received values." << endl << endl;
	
	// Loop to re-ask the user to re-enter another 2 values on it and re-calculate its 4 operations
	do {
		cout << "Enter the value of num1: ";
		cin >> num1;		
		cout << endl;
				
		cout << "Enter the value of num2: ";
		cin >> num2;		
		cout << endl;	
		
		// Instantiate a calc object form Calculator class from the included user-defined header file: "Calculator.ext.h"
		Calculator calc(num1, num2);
		
		cout << "Do you still want to continue using this Calculator program? (0 - no, 1 - any) ";
		
		// store the input in a string type var so that the user can enter any number of different chars
		cin >> checkContinue;
		
		cout << endl;
	}
	while (checkContinue != "0"); // Continue the loop as long as the entered input isn't "0"
	
	return 0;
	
}

