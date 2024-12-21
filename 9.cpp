#include <iostream>
using namespace std;
class food
{
	public:
		int cost;
		string item,type,quantity;
		void input()
		{
			cout<<"Enter the food item: ";
			cin>>item;
			cout<<"Enter the quantity(in kind): ";
			cin>>quantity;
			cout<<"Enter the type of "<<item<<"(starter/main course/dessert): ";
			cin>> type;
			cout<<"Cost: ";
			cin>> cost;
		}
		void display()
		{
			cout<<"Food Item: "<<item<<endl;
			cout<<"Quantity: "<<quantity<<endl;
			cout<<"Type of Item: "<<type<<endl;
			cout<<"Cost of the food item is "<<cost<<" Rs"<<endl;
			
		}
};
void costlier(food a,food b)
		{
			if(a.cost>b.cost){
				cout<<a.item<<" is costlier than "<<b.item<<".";
			}
			else{
				cout<<b.item<<" is costlier than "<<a.item<<".";
			}
			
		}
int main()
{
	food a,b;
	a.input();
	b.input();
	a.display();
	b.display();
	costlier(a,b);
	
}

