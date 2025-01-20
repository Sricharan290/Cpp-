#include <iostream> //allows us to read and write into files.
using namespace std;   //a library that wrapped all the standard libraries
class food  //Creation of class
{
	public:		//public is scope
		int cost;
		string item,type,quantity;      //member variables are declared.
		void input()		//member function
		{
			cout<<"Enter the food item: ";     //The operator cout is an object Belongs to output stream class
			cin>>item;				// cin is as input object that belongs to the input stream class
			cout<<"Enter the quantity(in kind): ";     //The operator cout is an object Belongs to output stream class
			cin>>quantity;				// cin is as input object that belongs to the input stream class
			cout<<"Enter the type of "<<item<<"(starter/main course/dessert): ";     //The operator cout is an object Belongs to output stream class
			cin>> type;				// cin is as input object that belongs to the input stream class
			cout<<"Cost: ";     //The operator cout is an object Belongs to output stream class
			cin>> cost;				// cin is as input object that belongs to the input stream class
		}
		void display()		//member function
		{
			cout<<"Food Item: "<<item<<endl;     //The operator cout is an object Belongs to output stream class
			cout<<"Quantity: "<<quantity<<endl;     //The operator cout is an object Belongs to output stream class
			cout<<"Type of Item: "<<type<<endl;     //The operator cout is an object Belongs to output stream class
			cout<<"Cost of the food item is "<<cost<<" Rs"<<endl;     //The operator cout is an object Belongs to output stream class
			
		}
};//Body of the class is closed.
void costlier(food a,food b)
		{
			if(a.cost>b.cost){
				cout<<a.item<<" is costlier than "<<b.item<<".";     //The operator cout is an object Belongs to output stream class
			}
			else{
				cout<<b.item<<" is costlier than "<<a.item<<".";     //The operator cout is an object Belongs to output stream class
			}
			
		}
int main()
{
	food a,b;		//creating an object
	a.input(); 		//calling the member functions that are created inside the class.
	b.input(); 		//calling the member functions that are created inside the class.
	a.display(); 		//calling the member functions that are created inside the class.
	b.display(); 		//calling the member functions that are created inside the class.
	costlier(a,b);
	return 0;   //int return from main()
}

