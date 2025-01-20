#include <iostream>  //allows us to read and write into files.
using namespace std;//this std has all the standard libraries of c++
class element{   //Creation of class
public:			//public is scope
	int a;//member variable declared
	float b;
	string n;
	void set();			//function is declared here
	void display();		//function is declared here
};//Body of the class is closed.
inline void element::set(){		//inline function is defined here
		cout<<"Enter Atomic Number:";     //The operator cout is an object Belongs to output stream class
		cin>>a;				// cin is as input object that belongs to the input stream class
		cout<<"Enter elements automic mass:";     //The operator cout is an object Belongs to output stream class
		cin>>b;				// cin is as input object that belongs to the input stream class
		cout<<"Enter Element Name:";     //The operator cout is an object Belongs to output stream class
		cin>>n;				// cin is as input object that belongs to the input stream class
	};
inline void element::display(){		//inline function is defined here
		cout<<"Atomic Number is:"<<a<<endl;     //The operator cout is an object Belongs to output stream class
		cout<<"Element Name is:"<<n<<endl;     //The operator cout is an object Belongs to output stream class
		cout<<"Element's automic mass is "<<b<<"."<<endl;     //The operator cout is an object Belongs to output stream class
	};
int main()//return int type
{
	element e1,e2;		//creating an object
	e1.set(); 		//calling the member functions that are created inside the class.
	e2.set(); 		//calling the member functions that are created inside the class.
    e1.display(); 		//calling the member functions that are created inside the class.
	e2.display(); 		//calling the member functions that are created inside the class.
	return 0;   //int return from main()
}
