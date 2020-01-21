#include <iostream>

using namespace std;

template <class T>
class JS_Item {
	T number;
	
	public:
		// Overloaded Constructor accepting no argument
		JS_Item() {	}
		
		// Overloaded Constructor accepting 1 argument of datatype of T
		JS_Item(T val) {
			number = val; // Used for initializing the Class template's attribute number
		}
		
		// Return the Class template's attribute number's value
		T get_val() {
			return number;
		}
		
		// Used setting a new value for the Class template's attribute number
		T set_val(T val) {
			number = val;
		}
		
		// The function used for sorting an array of Class template JS_Item
		void static js_sort(JS_Item<T> Array_Class_Template[]) {
			
			// Display all the Array_Class_Template's respective attribute numbers' values
			for(int x = 0; x <= 9; x++) {
				cout << Array_Class_Template[x].get_val() << " ";
			}
			cout << endl << endl;
			
			// Sort the Array_Class_Template in relation to its attribute numbers' values
			for(int a = 0; a <= 9; a++) {  // Loop for navigating all the values of the array
				for(int b = 0; b <= a; b++) { // Loop for navigating the current value back to beginning of the array until the current value's index
					
					// Check if the current value being navigated (first loop) is less than the new value of the current navigation (second loop).
					// If it is, swap the two values based on its indices. 
					
					// For example, if array[5] from the first loop is 1, and array[0] from the second loop is 10,
					// then array[5] will now be 10 and array[0] will now be 1, moving the least value in front of the array.
					if (Array_Class_Template[a].get_val() < Array_Class_Template[b].get_val()) {
						
						T temp = Array_Class_Template[a].get_val(); // store the current value of array[a] to the temp variable
						Array_Class_Template[a].set_val(Array_Class_Template[b].get_val()); // set the value of array[a] to the value of array[b]
						Array_Class_Template[b].set_val(temp); // set the value of array[b] to the temp variable's value
					
					}
					
				}
			}
			
			// Display the new Sorted Array_Class_Template's respective attribute numbers' values
			for(int x = 0; x <= 9; x++) {
				cout << Array_Class_Template[x].get_val() << " ";
			}
			cout << endl << endl;
		}
	
};

int main() {
	
	JS_Item<double> My_Items[10]; // Declare an array of an object from the Class Template JS_Item with a class of Double
	double number;
	
	// Accept 10 numerical values
	for(int x = 1; x <= 10; x++) {
		
		cout << "Number " << x << ": ";
		cin >> number;
		My_Items[x-1] = { number };
		
	}
	
//	= { JS_Item<double> (13), JS_Item<double> (22), JS_Item<double> (3), JS_Item<double> (44), JS_Item<double> (5),
//					JS_Item<double> (6), JS_Item<double> (7.5), JS_Item<double> (8), JS_Item<double> (9), JS_Item<double> (10) };
	
	cout << endl;		
	JS_Item<double>::js_sort(My_Items); // Call the static function js_sort, passing the array of object My_Items
	
	return 0;
	
}
