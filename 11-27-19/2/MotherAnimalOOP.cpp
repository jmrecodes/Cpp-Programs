#include <iostream>

// External user-defined header files which contains one class each
#include "Mother.h"
#include "Zebra.h"
#include "Dolphin.h"

using namespace std;
int main() {
	
	Mother animal; 
	animal.set_value("I am an animal!", 23); // Mother class has no display method only setting value
	
	Zebra zebra;
	zebra.set_value("I am a zebra!", 21); // Set zebra's variables which are from the Mother class
	
	Dolphin dolphin;
	dolphin.set_value("I am a dolphin!", 19); // Set dolphin's variables which are from the Mother class
	
	// Zebra
	cout << "Here are the info of Zebra" << endl << endl;
	zebra.display_name();
	zebra.display_age();
	
	// Change zebra's name
	zebra.change_name("Where's my name? Zebra btw.");
	
	// Call a Zebra-specific method
	zebra.growl();
	
	// Re-display zebra's name
	zebra.display_name();
	
	cout << endl;
	
	// Dolphin
	cout << "Here are the info of Dolphin" << endl << endl;
	dolphin.display_name();
	dolphin.display_age();
	
	// Change dolphin's age
	dolphin.change_age(100);
	
	// Call a Dolphin-specific method
	dolphin.squell();
	
	// Re-display dolphin's age
	dolphin.display_age();
	
	return 0;
	
}
