#include <iostream>   //allows us to read and write into files.
using namespace std;  //a library that wrapped all the standard libraries
class leaders         //Creation of class
{
	private:				// Member variables
	    string name;   //member variables are declared.
		int years_lived;
	public:		//public is scope
	void get_name(string n){	 // Member Functions
		name=n;
	}
	void get_age(int a){	 // Member Functions
		years_lived=a;
	}
	void print(){	 // Member Functions
		cout<<"The name of the leader is "<<name<<" and lived for "<<years_lived<<" years.";
	}
};//Body of the class is closed.

int main()
{
	leaders a,b;		//creating an object
	a.get_name("Gandhi");	// Accessing the member functions using . operator.
	a.get_age(78);	// Accessing the member functions using . operator.
	b.get_name("Martin");	// Accessing the member functions using . operator.
	b.get_age(39);	// Accessing the member functions using . operator.
	a.print();
	b.print();
		return 0;   //int return from main()
}

