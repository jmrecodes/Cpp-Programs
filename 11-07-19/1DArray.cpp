#include <iostream>

using namespace std;

// A function that accepts a number, ranging from 0 to 6, and convert it into a Day
void convert_int_to_string(int day) {
	
	switch (day) {
		case 0:
			cout << "Sunday";
			break;
		case 1:
			cout << "Monday";
			break;
		case 2:
			cout << "Tuesday";
			break;
		case 3:
			cout << "Wednesday";
			break;
		case 4:
			cout << "Thursday";
			break;
		case 5:
			cout << "Friday";
			break;
		case 6:
			cout << "Saturday";
			break;
	}
	
}

int main() {
	
	// Array of numbers with decimal point
	float allowances[7];
	
	cout << "In this program, you will enter your allowance for the whole week." << endl << endl;
	
	cout << "0 - Sunday" << endl;
	cout << "1 - Monday" << endl;
	cout << "2 - Tuesday" << endl; 
	cout << "3 - Wednesday" << endl;
	cout << "4 - Thursday" << endl;
	cout << "5 - Friday" << endl;
	cout << "6 - Saturday" << endl;
	
	// An infinite loop.. not recommended, just an exception for demonstration of this program 
	while(1) {
		cout << endl << "Enter the allowance for..." << endl << endl;
		
		// Loop for entering the values of the array allowances
		for (int i = 0; i <= 6; i++) {
			
			cout << i << ": ";

			// Starting from 0 of the for loop, ask for the value of index 0 of the array allowance
			// Next iteration of the loop, move the index to 1, ask again, until the last index 6
			cin >> allowances[i];
			
		}
		
		cout << endl << "You have entered the following allowances for the whole week:" << endl << endl;
		
		// Loop for displaying the values entered into the array
		for (int i = 0; i <= 6; i++) {
			
			// Call the function and pass by name an argument (i), which is 0, to display "Sunday"
			// Next iteration of the loop, i becomes  1, so the function displays "Monday" instead
			// And so on.. until the last value of i in the loop which is 6
			convert_int_to_string(i);

			// To display the value of an array, we specify its index using i 
			// i, based on the loop, started with a value of 0 and ends with a vaue of 6
			cout << ": " << allowances[i] << endl;
			
		}
	}
	
	return 0;
	
}
