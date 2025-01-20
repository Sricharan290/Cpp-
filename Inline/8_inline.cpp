#include <iostream>   //allows us to read and write into files.
using namespace std;  //a library that wrapped all the standard libraries
class leaders         //Creation of class
{
	public:		//public is scope
		string name,birth_place,nationality;     //member variables are declared.
		int years_lived,no_of_followers;
	void set();						//function is declared here					
	void display();				//function is declared here
};//Body of the class is closed.
inline void leaders::set()	{		//inline function is defined here
		cout<<"Enter Name: ";     //The operator cout is an object Belongs to output stream class
		cin>>name;				// cin is as input object that belongs to the input stream class
		cout<<"Enter Birth place of "<<name<<":";     //The operator cout is an object Belongs to output stream class
		cin>>birth_place;				// cin is as input object that belongs to the input stream class
		cout<<"Enter the no of years "<<name<<" lived:";     //The operator cout is an object Belongs to output stream class
		cin>>years_lived;				// cin is as input object that belongs to the input stream class
		cout<<"Enter the nationality of "<<name<<":";     //The operator cout is an object Belongs to output stream class
		cin>>nationality;				// cin is as input object that belongs to the input stream class
		cout<<"Enter the no of followers for"<<name<<":";     //The operator cout is an object Belongs to output stream class
		cin>>no_of_followers;				// cin is as input object that belongs to the input stream class
	};
inline void leaders::display()	{		//inline function is defined here
		cout<<"Name: "<<name<<endl;     //The operator cout is an object Belongs to output stream class
		cout<<"Birth place; "<<birth_place<<endl;     //The operator cout is an object Belongs to output stream class
		cout<<"Years lived: "<<years_lived<<endl;     //The operator cout is an object Belongs to output stream class
		cout<<"Nationality: "<<nationality<<endl;     //The operator cout is an object Belongs to output stream class
		cout<<"No of followers: "<<no_of_followers<<endl;     //The operator cout is an object Belongs to output stream class
	};
void popular(leaders a,leaders b){
	if(a.no_of_followers>b.no_of_followers){
		cout<<a.name<<" is popular than "<<b.name<<"."<<endl;     //The operator cout is an object Belongs to output stream class
	}
	else{
		cout<<b.name<<" is popular than "<<a.name<<"."<<endl;     //The operator cout is an object Belongs to output stream class
	}
}
int main()
{
	leaders a,b;		//creating an object
	a.set(); 		//calling the member functions that are created inside the class.
	b.set(); 		//calling the member functions that are created inside the class.
	a.display(); 		//calling the member functions that are created inside the class.
	b.display(); 		//calling the member functions that are created inside the class.
	popular(a,b); 		//calling the member functions that are created inside the class.
	return 0;   //int return from main()
}

