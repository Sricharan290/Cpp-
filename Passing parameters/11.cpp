#include <iostream>  //allows us to read and write into files.
using namespace std;//this std has all the standard libraries of c++
class element{   //Creation of class
private:		// Member variables
	string name;
	float mass;
public:			//public is scope
	void get_name(string n){	 // Member Functions
		name=n;
	}
	void get_mass(float c){	 // Member Functions
		mass=c;
	}
	void print(){	 // Member Functions
		cout<<name<<" has an automic mass of "<<mass<<" ."<<endl;
	}

};//Body of the class is closed.
int main()//return int type
{
	element e1,e2;		//creating an object
	e1.get_name("Hydrogen");	// Accessing the member functions using . operator.
	e1.get_mass(1.0080);	// Accessing the member functions using . operator.
	e2.get_name("Helium");	// Accessing the member functions using . operator.
	e2.get_mass(4.002);	// Accessing the member functions using . operator.
	e1.print();
	e2.print();
	return 0;   //int return from main()
}
