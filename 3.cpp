#include <iostream> //allows us to read and write into files.
using namespace std; //a library that wrapped all the standard libraries
class complex{ //Creation of the class
	int x1,y1,x2,y2; //declaration of member variables.
	public:
		void input(){
			cout<<"Enter the real part of the 1st complex number:";
			cin>>x1;
			cout<<"Enter the complex part of the 1st complex number:";
			cin>>y1;
			cout<<"Enter the real part of the 2nd complex number:";
			cin>>x2;
			cout<<"Enter the complex part of the 2nd complex number:";
			cin>>y2;
			cout<<endl<<"The 1st complex number is "<<x1<<"i+("<<y1<<")\n";
			cout<<endl<<"The 2nd complex number is "<<x2<<"i+("<<y2<<")\n";
		}
		void add(){
			cout<<"The summation of the 2 given complex numbers is "<<x1+x2<<"i+("<<y1+y2<<")\n";
		}
	
}; //Body of the class is closed.
int main(){
	complex c;
	c.input();
	c.add();	
	return 0;
}
