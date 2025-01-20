#include <iostream>  //allows us to read and write into files.
using namespace std;  //a library that wrapped all the standard libraries
class birds  //Creation of class
{
	private:		// Member variables
		string name;
		int count;
	public:		//public is scope
	void get_name(string n){	 // Member Functions
		name=n;
	}
	void get_count(int c){	 // Member Functions
		count=c;
	}
	void print(){	 // Member Functions
		cout<<"Just "<<count<<" no of "<<name<<" are available currently on earth."<<endl;
	}

};//Body of the class is closed.

int main()
{
	birds a,b;		//creating an object
	a.get_name("Stresemann's Bristlefront");	// Accessing the member functions using . operator.
	a.get_count(1);	// Accessing the member functions using . operator.
	b.get_name("Antioquia Brushfinch");	// Accessing the member functions using . operator.
	b.get_count(20);	// Accessing the member functions using . operator.
	a.print();
	b.print();
	return 0;   //int return from main()
}

