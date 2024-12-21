#include <iostream>
using namespace std;
class fruits
{
	public:
		int quantity;
		float weight;
		float cost;
		string fruit_name;
		string color;
		void set()
		{
			cout<<"Enter name of the Fruit: ";
			cin>>fruit_name;
			cout<<"Enter color of the fruit: ";
			cin>>color;
			cout<<"Enter weight of the 1 piece of the fruit (in g): ";
			cin>>weight;
			cout<<"Enter cost of 1kg: ";
			cin>>cost;
		}
		void display()
		{
			cout<<"Fruit Name: "<<fruit_name<<endl;
			cout<<"Color: "<<color<<endl;
			cout<<"Weight (in g): "<<weight<<endl;
			cout<<"Cost (1 Kg): "<<cost<<endl;
		}
};
void costlier(fruits a,fruits b){
	if (a.cost>b.cost){
		cout<<a.fruit_name<<" is costlier than "<<b.fruit_name<<endl;
	}
	else{
		cout<<b.fruit_name<<" is costlier than "<<a.fruit_name<<endl;
	}
}
int main()
{
	fruits f, g;
	f.set();
	f.display();
	g.set();
	g.display();
	costlier(f,g);
	
}

