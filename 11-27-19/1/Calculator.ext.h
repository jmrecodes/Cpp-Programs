#include <iostream>

using namespace std;

class Calculator {

	// Constructor that receives 2 parameters and display the result of its 4 operations
	public: Calculator(double num1, double num2) {
		
		displaySum(num1, num2);
		displayDiff(num1, num2);
		displayProd(num1, num2);
		displayQuot(num1, num2);
		
		cout << endl;
				
	}
	
	// Method used to calculate the sum of 2 numbers
	double sum(double num1, double num2) {
		
		return num1 + num2;
		
	}
	
	// Method used to calculate the difference of 2 numbers
	double diff(double num1, double num2) {
		
		return num1 - num2;
		
	}
	
	// Method used to calculate the product of 2 numbers
	double prod(double num1, double num2) {
		
		return num1 * num2;
		
	}
	
	// Method used to calculate the quotient of 2 numbers
	double quot(double num1, double num2) {
		
		return num1 / num2;
		
	}
	
	// Displays the sum by calling the sum method
	void displaySum(double num1, double num2) {
		
		cout << num1 << " + " << num2 << " = " << sum(num1, num2) << endl;
		
	}
	
	// Displays the difference by calling the sum method
	void displayDiff(double num1, double num2) {
		
		cout << num1 << " - " << num2 << " = " << diff(num1, num2) << endl;
		
	}
	
	// Displays the product by calling the sum method
	void displayProd(double num1, double num2) {
		
		cout << num1 << " * " << num2 << " = " << prod(num1, num2) << endl;
		
	}
	
	// Displays the quotient by calling the sum method
	void displayQuot(double num1, double num2) {
		
		cout << num1 << " / " << num2 << " = " << quot(num1, num2) << endl;
		
	}

};
