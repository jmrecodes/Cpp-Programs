#include <iostream>

using namespace std;

template <class T>
class Calc {
	T a, b;
	
	public:
		Calc(T num1, T num2) {
			a = num1;
			b = num2;
		}
		
		// Displays the equation
		void display_operation(char operand);
		
		// Returns the answer of the equation
		T add();
		T sub();
		T mul();
		T div();
	
};

template <typename T>
void Calc<T>::display_operation(char operand) {

	cout << a << " " << operand << " " << b << " = ";
	
}

template <typename T>
T Calc<T>::add () {
	
	return a + b;
	
}

template <typename T>
T Calc<T>::sub() {
	
	return a - b;
	
}

template <typename T>
T Calc<T>::mul() {
	
	return a * b;
	
}

template <typename T>
T Calc<T>::div() {
	
	return a / b;
	
}

int main() {
	
	double x, y; // The variables to hold the 2 values for calculation
	
	cout << "This program will calculate the 4 operations ( + - x / ) on 2 entered values." << endl << endl;
	
	cout << "Enter first number: ";
	cin >> x;
	
	cout << "Enter second number: ";
	cin >> y;
	
	// Instantiate the class template Calc and pass 'double' as its template's Class to be used, passing x and y to the Class template's constructor
	Calc <double> MyCalculator(x, y);
	
	cout << endl;
	
	// Calculate and display the results of the 4 equations
	MyCalculator.display_operation('+');
	cout << MyCalculator.add() << endl << endl;
	
	MyCalculator.display_operation('-');
	cout << MyCalculator.sub() << endl << endl;
	
	MyCalculator.display_operation('*');
	cout << MyCalculator.mul() << endl << endl;
	
	MyCalculator.display_operation('/');
	cout << MyCalculator.div() << endl << endl;
	// ENDOF: Calculate and display the results of the 4 equations
	
	return 0;
	
}
