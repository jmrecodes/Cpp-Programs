#include <iostream>
#include <String>

using namespace std;

class personsDailyMeal {

	string dailyMeal[2][2][3] = 
	{
		{
			{"Hotsilog", "BBQ", "Noodles"},
			{"Hotsilog", "BBQ", "Pansit"}	
		},
		{
			{"Tosilog", "BeefSteak", "Spag"},
			{"Tosilog", "PorkSteak", "Pansit"}	
		}
	};
	
	public:
		string persons[2] = {"John", "Peter"};
		string days[2] = {"Monday", "Tuesday"};
	    string mealTypes[3] = {"Breakfast", "Lunch", "Dinner"};
	
	string getPerson(int i) {
		return persons[i];
	}
	
	string getDay(int i) {
		return days[i];
	}
	
	string getMealType(int i) {
		return mealTypes[i];
	}
	
	string getMeal(int p, int d, int m) {
		return dailyMeal[p][d][m];
	}
	
	void displayAllPersons() {
		cout << endl;
		
		for (int i = 0; i < 2; i++) {
			cout << i << " => " << this->persons[i] << endl; 
		}
		
		cout << endl;
	}
	
	void displayAllDays() {
		cout << endl;
		
		for (int i = 0; i < 2; i++) {
			cout << i << " => " << this->days[i] << endl; 
		}
		
		cout << endl;
	}
	
	void displayAllMealTypes() {
		cout << endl;
		
		for (int i = 0; i < 3; i++) {
			cout << i << " => " << this->mealTypes[i] << endl; 
		}
		
		cout << endl;
	}
	
	void display3DArray() {
		for (int p = 0; p < 2; p++) {
			
			cout << this->getPerson(p) << endl;
				 
			for (int d = 0; d < 2; d++) {
				
				cout << "	" << this->getDay(d) << endl;
					 
				for (int t = 0; t < 3; t++) {
					cout << "		" << this->getMealType(t) << " = " << dailyMeal[p][d][t] << endl; 
				}
				
				cout << endl; 
			}
			
			cout << endl; 
		}
	}
};

int main() {
	
	personsDailyMeal Person1;
	int person;
	int day;
	int mealType;
	
	cout << "This program shows how to navigate and access values of a 3D array." << endl << endl;
	
	cout << "The following is the complete table of values: " << endl << endl;
	Person1.display3DArray();
	
	Person1.displayAllPersons();
	
	cout << "Choose the person to check its daily meal: ";
	cin >> person;	
	
	Person1.displayAllDays();
	
	cout << endl <<"Choose the day to check " << Person1.getPerson(person) << "'s meal: ";
	cin >> day;
	
	Person1.displayAllMealTypes();
	
	cout << endl <<"Choose the type of meal to check " << Person1.getPerson(person) << "'s meal on " << Person1.getDay(day) << ": ";
	cin >> mealType;
	
	cout << endl << Person1.getPerson(person) << " => " << Person1.getDay(day) << " => " << Person1.getMealType(mealType) << " is ";
	cout << Person1.getMeal(person, day, mealType);
	
	return 0;	
	
}
