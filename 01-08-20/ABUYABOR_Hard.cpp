#include <iostream>

using namespace std;

// A recursive function that converts decimal number (max 999) to its equivalent binary form
void binary_form(int n, bool binary[], int counter = 0, int divider = 512) {
	
	// while counter is still less than or equal to 9 (number of binary digits is 10)
	if (counter <= 9) {
	
		// Divide the decimal number, n, by 512 and set the answer (0 or 1) to the first binary digit
		binary[counter] = n / divider; 
		
		// Recursion so that the recursive function will keep on looping until all the binary digits are checked (counter <= 9).
		// Updates decimal number, n, for the next loop to be the remainder when divided by current divider's value (initial 512)
		// Updates the binary if ever line #12 updated it
		// Increments counter so that the recursion will end
		// Updates divider's value by dividing it by 2, from 512 to 256 to 128 and etc., which corresponds to binary digit's equivalent value
		binary_form(n % divider, binary, counter + 1, divider / 2);
		
	}
	// After getting the equivalent binary
	else {
		
		bool checkIf1IsFound = false; // Used to remove unnecessary 0s from the left side of the binary
		
		// Loop for displaying the value of the array, binary
		for(int x = 0; x <= 9; x++) {
			
			// Only display binary digits of value 0 when its value started to have a value of 1
			if (checkIf1IsFound || binary[x])
				cout << binary[x] << " ";
			
			// Updates checkIf1IsFound's value to true after finding a binary digit's value of 1	
			if (binary[x] == 1)
				checkIf1IsFound = true;
			
		}
		
	}
	
}

int main() {
	
	int number; // decimal number
	bool binary[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // Used to store the binary equivalent of the decimal number
	
	cout << "This program will convert a decimal number to its binary form."
		 << endl << endl;
	
	cout << "Decimal number ( >= 0 ) : ";
	cin >> number;
	
	if (number >= 0)
		// Calls the recursive function, passing number's and binary's value to the function's parameter n and binary
		binary_form(number, binary);
	else 
		cout << "You entered an invalid number. The program will now exit";
	
	return 0;
}
