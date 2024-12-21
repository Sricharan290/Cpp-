#include <iostream>
using namespace std;//this std has all the standard libraries of c++
class element{
public:	
	int a;//member variable declared(private)
	float b;
	string n;
	void set(){//member functions
		cout<<"Enter Atomic Number:";
		cin>>a;
		cout<<"Enter elements automic mass:";
		cin>>b;
		cout<<"Enter Element Name:";
		cin>>n;
	}
	void display(){//member functions
		cout<<"Atomic Number is:"<<a<<endl;
		cout<<"Element Name is:"<<n<<endl;
		cout<<"Element's automic mass is "<<b<<"."<<endl;
	}
};
int main()//return int type
{
	element e1,e2;
	e1.set();
	e2.set();
    e1.display();
	e2.display();
	return 0;
}
