#include <iostream>

using namespace std;

// A recursive function that displays a number of fibonacci sequence, 1 1 2 3 5 8 13 21 etc.
void fibonacci(int n, int x = 0, int y = 1) {
	
	// While n is still greater than or equal to 1
	if (n >= 1) {
	
		// Display y, a variable holder for the fibonacci sequence 
		cout << y << " ";
		
		int temp = x; // Store the current value of x to a temporary variable, temp
		x = y; // Assign the value of y to x so that it can be used for getting the current fibonacci sequence
		y = temp + y; // Increase the value of y by adding the initial value of x before it got reassigned to have y's value
		
		fibonacci(n - 1, x, y); // Recursion so that the recursive function will keep on looping until n is no longer >= 1
	
	}
	else 
		return; // Ends the loop
	
}

int main() {
	
	int number;
	
	cout << "This program will show a number of fibonacci sequence based on how many the user wants it to display."
		 << endl << endl;
	
	cout << "How many fibonacci sequence do you want to display? Number ( >= 0 ) : ";
	cin >> number;
	
	if (number >= 0)
		fibonacci(number); // Calls the recursive function, passing number's value to the function's parameter n
	else 
		cout << "You entered an invalid number. The program will now exit";
	
	return 0;
}
