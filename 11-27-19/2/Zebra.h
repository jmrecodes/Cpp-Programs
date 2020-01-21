class Zebra : public Mother {
	
	string origin;
	
	public:
		// Changes the value of the name variable which is from the Mother class
		void change_name(string inp_name) {
			
			name = inp_name;
			
		}
	
		// Sets the value of the origin variable 
		void set_origin(string passed_origin) {
			
			origin = passed_origin;
			
		}
		
		// Display the value of the name and age variables which are from the Mother class
		void display_name() {
			
			cout << "Name is " << name << endl;
			
		}
		
		void display_age() {
			
			cout << "Age is " << age << endl;
			
		}
		
		// Just a method specific to this class that displays any random output
		void growl() {
			
			cout << "Hiyeaaaah!" << endl;
			
		}
};
