#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

int main()
{
	// Declares the variables needed for the program  
    string fname, lname, contOrNot; // contOrNot is used for asking an input for verification to continue or not
    double gscore;
    
    // Size is for getting the number of times to loop in order to navigate through an array of object
    // Id is for asking the user to display a record of his own choice
    int size = 0, id;
    
    // Instantiating an array of object of Person with an object name of game_scoreboard and a length of 100 (index of 0 - 99)
    Person game_scoreboard[100];
    
    cout << "Welcome to your Game Scoreboard" << endl; 
	cout << "First enter a list of person w/ their game scores!" << endl << endl;
    
    // Loop for asking the input of a person with a first and last name and his game score
    do {
    
    	// First name input
        cout << "Enter the first name: ";
        cin >> fname;
      
      	// Last name input
        cout << "Enter the last name: ";
        cin >> lname;
        
        // Game score input
        cout << "Enter " << fname << " " << lname << "'s score: ";
        cin >> gscore;
        
        // Initializing the current game_scoreboard object by specifying which game_scoreboard to initialize by
        // its index through [size] by calling its constructor and passing fname, lname, gscore to it
        game_scoreboard[size] = {fname, lname, gscore};
        size++;      
        
        // Verify to continue adding another Person to the Game Scoreboard or not
        cout << endl << "Insert more record to your Game Scoreboard? No - Enter 0, Yes - Enter any key" << endl;
        cin >> contOrNot;
        cout << endl;
      
    }
    while(contOrNot != "0"); // Unless the input was 0, the loop continues
    
    cout << "List of all records in your Game Scoreboard: " << endl << endl;
    
    // Loop for displaying all the Person's first and last name and their game scores by
    // navigating through the array of object in the object game_scoreboard.
    // Loop also continues unless it reached the last object instantiated counted by variable size
    for (int i = 0; i < size; i++) {  
    
        cout << "[" << i << "] ";  
        
        // Display the full name of the current object by calling its display_full_name() method
        game_scoreboard[i].display_full_name();
        
        //Append the game_score of the current object to the display by calling its get_gscore() method
        cout << "'s score: " << game_scoreboard[i].get_gscore() << endl;
      
    }
    
    contOrNot = ""; // Reset contOrNot
    
    cout << endl << "Now you entered the part where you can view a specific record of your Game Scoreboard." << endl << endl;
    
    // Loop for viewing a specific record of all Person entered
    do {
      
        cout << "Enter the id of your desired record to view: ";
        cin >> id; // Used to specify which object in the array of object, game_scoreboard, to access
      
    	// Re-run the loop if the id is invalid, being less than 0 (minimum index) and greater than or equal to size
        if (id < 0 || id >= size) {
            
            cout << "You have entered an invalid id. The program will now retry." << endl << endl;
            continue; // Restarts the loop back to the starting line of this do-while loop
            
        }
      
        // Display the full name of the chosen object by calling its display_full_name() method
        game_scoreboard[id].display_full_name();
        
        //Append the game score of the chosen object to the display by calling its get_gscore() method
        cout << "'s score: " << game_scoreboard[id].get_gscore() << endl;    
        
        // Verify to continue viewing another record of a Person or not
        cout << endl << "View another record of your Game Scoreboard? No - Enter 0, Yes - Enter any key" << endl;
        cin >> contOrNot;
        cout << endl;
      
    }
    while(contOrNot != "0"); // Unless the input was 0, the loop continues
  
  	// Append the average score to the display by calling directly the static method get_average_score of the class Person and
  	// passing the array of object, game_scoreboard, and the number of game_scoreboard instantiated through the variable size
    cout << "The average score of all the records in your Game Scoreboard is: " << Person::get_average_score(game_scoreboard, size);
    
    return 0;
  
}
