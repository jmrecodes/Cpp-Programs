#include <iostream>
#include <String>

using namespace std;
int main() {
	
	enum PersonGrade { Moremm = 100, Lester = 91, Joan = 99, Historia = 100, Kierlo = 95, MM = 73};
	string person, continueOrNot;
	PersonGrade grade;
	
	while (continueOrNot != "0") {
		
		cout << "Valid person's names and its respective grades: " << endl << endl;
		cout << "Moremm => " << PersonGrade(Moremm) << endl << "Lester => " << PersonGrade(Lester) << endl << "Joan => " << PersonGrade(Joan) << endl
			 << "Historia => " << PersonGrade(Historia) << endl << "Kierlo => " << PersonGrade(Kierlo) << endl << "MM => " << PersonGrade(MM) << endl << endl;
		
		cout << "Enter the name of the person you want to display its grade of: ";
		cin >> person;
				
		if (person == "Moremm") {
			grade = Moremm;
		}
		else if (person == "Lester"){
			grade = Lester;
		}
		else if (person == "Joan"){
			grade = Joan;
		}
		else if (person == "Historia"){
			grade = Historia;
		}
		else if (person == "Kierlo"){
			grade = Kierlo;
		}
		else if (person == "MM"){
			grade = MM;
		}
		else {
			cout << "Invalid name entered, please try again." << endl << endl;
			continue;
		}
		
		cout << endl << person << "'s grade is: " << grade;
		
		if (grade >= 75)
				cout << " - Pass!";
			else
				cout << " - Fail";
		
		cout << endl << endl << "Do you want to continue using this program or not? 0 = No, Any input = Yes" << endl;
		cin >> continueOrNot;
		cout << endl;
		
	}
	
	return 0;	
	
}
