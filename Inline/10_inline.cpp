#include <iostream>  //allows us to read and write into files.
using namespace std;  //a library that wrapped all the standard libraries
class birds  //Creation of class
{
	public:		//public is scope
		string name,type;
		int current_no;      //member variables are declared.
		bool fly;
		void input();				//function is declared here
		void display();				//function is declared here
};//Body of the class is closed.
inline void birds::input()		{		//inline function is defined here
			cout<<"Enter the name of the bird: ";     //The operator cout is an object Belongs to output stream class
			cin>>name;				// cin is as input object that belongs to the input stream class
			cout<<"Enter the type of "<<name<<"(Aquatic/Terrestrial/Arboreal): ";     //The operator cout is an object Belongs to output stream class
			cin>> type;				// cin is as input object that belongs to the input stream class
			cout<<"Enter the no of "<<name<<" currently available: ";     //The operator cout is an object Belongs to output stream class
			cin>> current_no;				// cin is as input object that belongs to the input stream class
			cout<<"Can "<<name<<" fly? (1 if flies,0 if not):";     //The operator cout is an object Belongs to output stream class
			cin>>fly;				// cin is as input object that belongs to the input stream class
		};
inline void birds::display()		{		//inline function is defined here
			cout<<"Bird: "<<name<<endl;     //The operator cout is an object Belongs to output stream class
			cout<<name<<"is of "<<type<<" type"<<endl;     //The operator cout is an object Belongs to output stream class
			cout<<current_no<<" no of "<<name<<" are currently available now."<<endl;     //The operator cout is an object Belongs to output stream class
			if (fly==true){
				cout<<name<<" can fly."<<endl;     //The operator cout is an object Belongs to output stream class
			}
			else{
				cout<<name<<" can't fly."<<endl;     //The operator cout is an object Belongs to output stream class
			}	
		};
void rare(birds a,birds b)
		{
			if(a.current_no>b.current_no){
				cout<<a.name<<" is rarer than "<<b.name<<".";     //The operator cout is an object Belongs to output stream class
			}
			else{
				cout<<b.name<<" is rarer than "<<a.name<<".";     //The operator cout is an object Belongs to output stream class
			}
			
		}
int main()
{
	birds a,b;		//creating an object
	a.input(); 		//calling the member functions that are created inside the class.
	b.input(); 		//calling the member functions that are created inside the class.
	a.display(); 		//calling the member functions that are created inside the class.
	b.display(); 		//calling the member functions that are created inside the class.
	rare(a,b);
	return 0;   //int return from main()
}

