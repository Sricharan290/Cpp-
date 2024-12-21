#include <iostream>
using namespace std;
class countries
{
	public:
		string country;
		string capital;
		int population;
		float area,density;
		void input()
		{
			cout<<"Enter the name of the country: ";
			cin>>country;
			cout<<"Enter the capital of the "<<country<<":";
			cin>>capital;
			cout<<"Enter the population of the country: ";
			cin>>population;
			cout<<"Enter the area of the Country: ";
			cin>> area;
		}
		int max(int x, int y)
		{
			if (x>y)
				return(x);
			else
				return(y);
			
		}
		
		float dens(int x,float y){
			density = x/y;
		}
		void display()
		{
			cout<<"Country: "<<country<<endl;
			cout<<"Capital: "<<capital<<endl;
			cout<<"Population of the Country: "<<population<<endl;
			cout<<"Area covered by the Country: "<<area<<endl;
			cout<<"Density of the country:"<<density<<endl;
		}
	
};
void most_pop(countries a,countries b){
	if (a.population>b.population){
		cout<<a.country<<"is more populated than "<<b.country<<endl;
	}
	else{
		cout<<b.country<<"is more populated than "<<a.country<<endl;
	}
}

void most_denser(countries a,countries b){
	if (a.density>b.density){
		cout<<a.country<<"is more denser than "<<b.country<<endl;
	}
	else{
		cout<<b.country<<"is more denser than "<<a.country<<endl;
	}
}
int main()
{
	countries i,j;
	i.input();
	i.dens(i.population,i.area);	
	j.input();
	j.dens(j.population,j.area);
	i.display();
	j.display();
	most_pop(i,j);
	most_denser(i,j);
}

