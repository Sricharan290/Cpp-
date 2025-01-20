#include <iostream>		//allows us to read and write into files.
using namespace std;	//a library that wrapped all the standard libraries
class fruits			//Creation of class
{
	public:		//public is scope
		int quantity;		//member variables are declared.
		float weight;
		float cost;
		string fruit_name;	//member variables are declared.
		string color;
		void set()
		{					//member function
			cout<<"Enter name of the Fruit: ";     //The operator cout is an object Belongs to output stream class
			cin>>fruit_name;				// cin is as input object that belongs to the input stream class
			cout<<"Enter color of the fruit: ";     //The operator cout is an object Belongs to output stream class
			cin>>color;				// cin is as input object that belongs to the input stream class
			cout<<"Enter weight of the 1 piece of the fruit (in g): ";     //The operator cout is an object Belongs to output stream class
			cin>>weight;				// cin is as input object that belongs to the input stream class
			cout<<"Enter cost of 1kg: ";     //The operator cout is an object Belongs to output stream class
			cin>>cost;				// cin is as input object that belongs to the input stream class
		}
		void display()		//member function
		{
			cout<<"Fruit Name: "<<fruit_name<<endl;     //The operator cout is an object Belongs to output stream class
			cout<<"Color: "<<color<<endl;     //The operator cout is an object Belongs to output stream class
			cout<<"Weight (in g): "<<weight<<endl;     //The operator cout is an object Belongs to output stream class
			cout<<"Cost (1 Kg): "<<cost<<endl;     //The operator cout is an object Belongs to output stream class
		}
};//Body of the class is closed.
void costlier(fruits a,fruits b){
	if (a.cost>b.cost){
		cout<<a.fruit_name<<" is costlier than "<<b.fruit_name<<endl;     //The operator cout is an object Belongs to output stream class
	}
	else{
		cout<<b.fruit_name<<" is costlier than "<<a.fruit_name<<endl;     //The operator cout is an object Belongs to output stream class
	}
}
int main()
{
	fruits f, g;		//creating an object
	f.set(); 		//calling the member functions that are created inside the class.
	f.display(); 		//calling the member functions that are created inside the class.
	g.set(); 		//calling the member functions that are created inside the class.
	g.display(); 		//calling the member functions that are created inside the class.
	costlier(f,g);
	return 0;   //int return from main()
}

