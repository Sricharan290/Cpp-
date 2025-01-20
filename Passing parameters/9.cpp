#include <iostream> //allows us to read and write into files.
using namespace std;   //a library that wrapped all the standard libraries
class food  //Creation of class
{
	private:		// Member variables
		int cost;
		string item;
	public:	
	void get_item(string i){	 // Member Functions
		item=i;	
	}
	void get_cost(int c){	 // Member Functions
		cost=c;
	}
	void print(){	 // Member Functions
		cout<<"The cost of the item "<<item<<" is "<<cost<<" ."<<endl;
	}

};//Body of the class is closed.
int main()
{
	food a,b;		//creating an object
	a.get_item("Noodles");	// Accessing the member functions using . operator.
	a.get_cost(100);	// Accessing the member functions using . operator.
	b.get_item("burger");	// Accessing the member functions using . operator.
	b.get_cost(150);	// Accessing the member functions using . operator.
	a.print();
	b.print();
	return 0;   //int return from main()
}

