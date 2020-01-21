class Dolphin : public Mother {
	
	string origin;
	
	public:
		// Changes the value of the age variable which is from the Mother class
		void change_age(int inp_age) {
			
			age = inp_age;
			
		}
		
		// Sets the value of the origin variable 
		void set_origin(string passed_origin) {
			
			origin = passed_origin;
			
		}
		
		// Display the value of the name variables which are from the Mother class
		void display_name() {
			
			cout << "Name is " << name << endl;
			
		}
		
		// Display the value of the age variables which are from the Mother class
		void display_age() {
			
			cout << "Age is " << age << endl;
			
		}
		
		// Just a method specific to this class that displays any random output
		void squell() {
			
			cout << "Hyeeeeeeeeh!" << endl;
			
		}
	
};
