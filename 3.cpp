#include <iostream>    //allows us to read and write into files.
using namespace std; //a library that wrapped all the standard libraries
class complex{ //Creation of the class
	int x1,y1,x2,y2; //declaration of member variables.
	public:		//public is scope
		void input(){			//member function
			cout<<"Enter the real part of the 1st complex number:";     //The operator cout is an object Belongs to output stream class
			cin>>x1; //is an input object from the istream.
			cout<<"Enter the complex part of the 1st complex number:"; //is an output object from the istream
			cin>>y1;				// cin is as input object that belongs to the input stream class
			cout<<"Enter the real part of the 2nd complex number:";     //The operator cout is an object Belongs to output stream class
			cin>>x2;				// cin is as input object that belongs to the input stream class
			cout<<"Enter the complex part of the 2nd complex number:";     //The operator cout is an object Belongs to output stream class
			cin>>y2;				// cin is as input object that belongs to the input stream class
			cout<<endl<<"The 1st complex number is "<<x1<<"i+("<<y1<<")\n";     //The operator cout is an object Belongs to output stream class
			cout<<endl<<"The 2nd complex number is "<<x2<<"i+("<<y2<<")\n";     //The operator cout is an object Belongs to output stream class
		}
		void add(){
			cout<<"The summation of the 2 given complex numbers is "<<x1+x2<<"i+("<<y1+y2<<")\n";     //The operator cout is an object Belongs to output stream class
		}
	
}; //Body of the class is closed.
int main(){
	complex c; //creating an object
	c.input(); 		//calling the member functions that are created inside the class.
	c.add();	 		//calling the member functions that are created inside the class.
	return 0;   //int return from main()
}
