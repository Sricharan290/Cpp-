#include <iostream>
using namespace std;
class leaders
{
	public:
		string name,birth_place,nationality;
		int years_lived,no_of_followers;
	void set()
	{
		cout<<"Enter Name: ";
		cin>>name;
		cout<<"Enter Birth place of "<<name<<":";
		cin>>birth_place;
		cout<<"Enter the no of years "<<name<<" lived:";
		cin>>years_lived;
		cout<<"Enter the nationality of "<<name<<":";
		cin>>nationality;
		cout<<"Enter the no of followers for"<<name<<":";
		cin>>no_of_followers;
	}
	void display()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"Birth place; "<<birth_place<<endl;
		cout<<"Years lived: "<<years_lived<<endl;
		cout<<"Nationality: "<<nationality<<endl;
		cout<<"No of followers: "<<no_of_followers<<endl;
	}
	
};
void popular(leaders a,leaders b){
	if(a.no_of_followers>b.no_of_followers){
		cout<<a.name<<" is popular than "<<b.name<<"."<<endl;
	}
	else{
		cout<<b.name<<" is popular than "<<a.name<<"."<<endl;
	}
}
int main()
{
	leaders a,b;
	a.set();
	b.set();
	a.display();
	b.display();
	popular(a,b);
}

