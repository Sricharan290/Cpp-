#include <iostream> //allows us to read and write into files.
using namespace std;//this std has all the standard libraries of c++, a library that wrapped all the standard libraries
class languages   //Creation of class
{
    string language;
    double speakers;      //member variables are declared.
    string country;
    public:		//public is scope
        void set(){//member function
            cout<<"Enter language:";     //The operator cout is an object Belongs to output stream class
            cin>>language;				// cin is as input object that belongs to the input stream class
            cout<<"Country:";     //The operator cout is an object Belongs to output stream class
            cin>>country;				// cin is as input object that belongs to the input stream class
            cout<<"No. of speakers:";     //The operator cout is an object Belongs to output stream class
            cin>>speakers;				// cin is as input object that belongs to the input stream class
        }
        void display(){//member functions
        cout<<endl;//The operator cout is an object Belongs to output stream class
		cout<<"Language :"<<language<<endl;     //The operator cout is an object Belongs to output stream class
		cout<<"Country:"<<country<<endl;     //The operator cout is an object Belongs to output stream class
        cout<<"Speakers"<<speakers<<endl;     //The operator cout is an object Belongs to output stream class
	}
};//Body of the class is closed.
int main(){
    languages l1, l2, l3;		//creating an object

    //User input
    cout<<"Enter language 1 details"<<endl;     //The operator cout is an object Belongs to output stream class
    l1.set(); 		//calling the member functions that are created inside the class.
    cout<<"Enter language 2 details"<<endl;     //The operator cout is an object Belongs to output stream class
    l2.set(); 		//calling the member functions that are created inside the class.
    cout<<"Enter language 3 details"<<endl;     //The operator cout is an object Belongs to output stream class
    l3.set(); 		//calling the member functions that are created inside the class.
    l1.display(); 		//calling the member functions that are created inside the class.
    l2.display(); 		//calling the member functions that are created inside the class.
    l3.display(); 		//calling the member functions that are created inside the class.

    return 0;   //int return from main()
};
