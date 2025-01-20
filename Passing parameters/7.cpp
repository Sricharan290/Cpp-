#include <iostream>		//allows us to read and write into files.
using namespace std;	//a library that wrapped all the standard libraries
class fruits			//Creation of class
{
	private:			// Member variables
		string name;
		int cost;
	public:		//public is scope
	void get_name(string n){	 // Member Functions
		name=n;
	}
	void get_cost(int c){	 // Member Functions
		cost=c;
	}
	void print(){	 // Member Functions
		cout<<"1 kg of "<<name<<" costs "<<cost<<" ."<<endl;
	}

};//Body of the class is closed.

int main()
{
	fruits a,b;		//creating an object
	a.get_name("Apple");	// Accessing the member functions using . operator.
	a.get_cost(250);	// Accessing the member functions using . operator.
	b.get_name("Orange");	// Accessing the member functions using . operator.
	b.get_cost(70);	// Accessing the member functions using . operator.
	a.print();
	b.print();
	return 0;   //int return from main()
}

