#include <iostream>
#include <string>

using namespace std;

// A class used for creating a person with first and last name and his game score
class Person {
    
    string fname, lname;
    double gscore;
    
    public:
    	// An empty Constructor to be used when instantiating an array of object of Person
        Person() {}
        
        // A Constructor used for setting the values of Person's attributes
        Person(string f_name, string l_name, double g_score) {
            fname = f_name;
            lname = l_name;
            gscore = g_score;
        }
        
        // A method that simply displays the class Person's first and last name
        void display_full_name() {
            cout << fname << " " << lname;   
        }
        
        // A method that simply returns the class Person's game score
        double get_gscore() {
            return gscore;   
        }
        
        // A static method that can be called directly w/o an object for calculating the average game score of a set of Person objects
		// The parameters are (1) game_scoreboard, an array of Person object and (2) size, how many Person objects passed there is
        static double get_average_score(Person game_scoreboard[], int size) {
        
            int average = 0;
        
        	// Loop for navigating through the array of objects, game_scoreboard, passed through the method
            for (int i = 0; i < size; i++) {
             
            	// Adds the value of the current object's, game_scoreboard[i], gscore attribute's value to average
                average += game_scoreboard[i].get_gscore();
                
            }
            
            // Gets the average by dividing the total of game scores of all game_scoreboard by the number of game_scoreboard
            average /= size;
            
            return average;
        
        }
    
};
