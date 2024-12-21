#include <iostream> //allows us to read and write into files.
using namespace std; //a library that wrapped all the standard libraries
class complex{ //Creation of the class
		int x,y; //declaration of member variables.
		public:
			void input(){
			cout<<"Enter the real part of the complex number:";
			cin>>x;
			cout<<"Enter the complex part of the complex number:";
			cin>>y;	
			}
			void display(){
			cout<<x<<"i+("<<y<<")"<<endl;				
			}
			int getReal()
			{
				return(x);
			}
			int getImag(){
				return(y);
			}
			void putReal(int r){
				x= r;
			}
			void putImag(int i){
				y= i;
			}
			
		};

complex sum(complex a, complex b){
	complex t;
	t.putReal(a.getReal()+b.getReal());
	t.putImag(a.getImag()+b.getImag());
	return t;
}

int main(){
	complex a,b,s;
	a.input();
	a.display();
	b.input();
	b.display();
	s=sum(a,b);
	s.display();
	return(0);
}
