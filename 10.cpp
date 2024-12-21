#include <iostream>
using namespace std;
class birds
{
	public:
		string name,type;
		int current_no;
		bool fly;
		void input()
		{
			cout<<"Enter the name of the bird: ";
			cin>>name;
			cout<<"Enter the type of "<<name<<"(Aquatic/Terrestrial/Arboreal): ";
			cin>> type;
			cout<<"Enter the no of "<<name<<" currently available: ";
			cin>> current_no;
			cout<<"Can "<<name<<" fly? (1 if flies,0 if not):";
			cin>>fly;
		}
		void display()
		{
			cout<<"Bird: "<<name<<endl;
			cout<<name<<"is of "<<type<<" type"<<endl;
			cout<<current_no<<" no of "<<name<<" are currently available now."<<endl;
			if (fly==true){
				cout<<name<<" can fly."<<endl;
			}
			else{
				cout<<name<<" can't fly."<<endl;
			}	
		}
};
void rare(birds a,birds b)
		{
			if(a.current_no>b.current_no){
				cout<<a.name<<" is rarer than "<<b.name<<".";
			}
			else{
				cout<<b.name<<" is rarer than "<<a.name<<".";
			}
			
		}
int main()
{
	birds a,b;
	a.input();
	b.input();
	a.display();
	b.display();
	rare(a,b);
	
}

