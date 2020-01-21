#include <iostream>

using namespace std;

// A function that accepts a number, ranging from 0 to 6, and converts it into a Day
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
	
	// 2D Array of numbers with decimal point with 2 rows and 7 columns on each row, meaning 2 arrays each containing 7 values per array
	float allowances[2][7];
	
	cout << "In this program, you will enter the allowance of Person1 and Person2 for the whole week." << endl << endl;
	
	cout << "0 - Sunday" << endl;
	cout << "1 - Monday" << endl;
	cout << "2 - Tuesday" << endl; 
	cout << "3 - Wednesday" << endl;
	cout << "4 - Thursday" << endl;
	cout << "5 - Friday" << endl;
	cout << "6 - Saturday" << endl << endl;
	
	// An infinite loop.. not recommended, just an exception for demonstration of this program 
	while(1) {

		// Loops for entering the values of the array allowances
		// This first loop / outer loop will first navigate on its rows, meaning the 2 arrays, hence the for loop condition i <= 1
		for (int i = 0; i <= 1; i++) {
		
			// With i starting with a value of 0, i + 1 is 1 hence displaying "Enter the allowance for Person1..." 
			// The next and last iteration of the first loop / outer loop will have i's value as 1 so 1 + 1 is 2 hence displaying "...Person2"
			cout << "Enter the allowance for Person" << i + 1 << "..." << endl << endl;
			
			// This second loop / inner loop will now navigate on the values part of the 2D array, since the first dimension don't contain any value
			// During the first iteration of the first loop, with i being 0, therefore the values that will be navigated below will be the first array
			// The next and last iteration of the first loop, with i being 1, therefore the values that will be navigated below will now be the 2nd array
			// The loop below starting with j having a value of 0 and ending with a value of 6, navigates through the 2nd dimension of the 2D array
			for (int j = 0; j <= 6; j++) {
				
				cout << j << ": ";

				// To set the value of a 2D array, we need to specify the row and column, which are i and j respectively
				// i serves as row, letting us know which row of the 2D array are we setting the values for
				// j serves as column, lettings us know which column of the row of the 2D array is this value for
				cin >> allowances[i][j];
				
			}
			
			cout << endl;
		}
		
		// Loops for displaying the values of the array allowances
		// Setting the values and displaying the values of a 2D array are the same
		// First you navigate the row using a loop, then inside that loop you navigate its column using another loop
		for (int i = 0; i <= 1; i++) {
		
			cout << endl << "You have entered the following allowances for the whole week of Person" << i + 1 << endl << endl;
			
			for (int j = 0; j <= 6; j++) {
				
				// Call the function and pass by name an argument (i), which is 0, to display "Sunday"
				// Next iteration of the loop, i becomes  1, so the function displays "Monday" instead
				// And so on.. until the last value of i in the loop which is 6
				convert_int_to_string(j);
				

				// To display the value of an array, we specify its row using i and its column using j
				// i, based on the first loop, started with 0
				// With i being 0, j, based on the second loop, will have a value of 0 up to 6
				// Therefore you'll be able to set the values of the first array using allowances[0][0], allownaces[0][1], etc.
				// When j becomes 7, the second loop stops, but the first loop continues since i being 1 is still <= 6
				cout << ": " << allowances[i][j] << endl;
				
			}
			
			cout << endl;
		}
	}
	
	return 0;
	
}

