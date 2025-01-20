#include <iostream>  //allows us to read and write into files.
using namespace std;  //a library that wrapped all the standard libraries
class countries  //Creation of class
{
	public:		//public is scope
		string country;      //member variables are declared.
		string capital;
		int population;		//Declaration of variables
		float area,density;
		void input()		//member functions
		{
			cout<<"Enter the name of the country: ";     //The operator cout is an object Belongs to output stream class
			cin>>country;				// cin is as input object that belongs to the input stream class
			cout<<"Enter the capital of the "<<country<<":";     //The operator cout is an object Belongs to output stream class
			cin>>capital;				// cin is as input object that belongs to the input stream class
			cout<<"Enter the population of the country: ";     //The operator cout is an object Belongs to output stream class
			cin>>population;				// cin is as input object that belongs to the input stream class
			cout<<"Enter the area of the Country: ";     //The operator cout is an object Belongs to output stream class
			cin>> area;				// cin is as input object that belongs to the input stream class
		}
		int max(int x, int y) 		//member functions
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
			cout<<"Country: "<<country<<endl;     //The operator cout is an object Belongs to output stream class
			cout<<"Capital: "<<capital<<endl;     //The operator cout is an object Belongs to output stream class
			cout<<"Population of the Country: "<<population<<endl;     //The operator cout is an object Belongs to output stream class
			cout<<"Area covered by the Country: "<<area<<endl;     //The operator cout is an object Belongs to output stream class
			cout<<"Density of the country:"<<density<<endl;     //The operator cout is an object Belongs to output stream class
		}
	
};//Body of the class is closed.
void most_pop(countries a,countries b){   //functions declared outside the class 
	if (a.population>b.population){
		cout<<a.country<<"is more populated than "<<b.country<<endl;     //The operator cout is an object Belongs to output stream class
	}
	else{
		cout<<b.country<<"is more populated than "<<a.country<<endl;     //The operator cout is an object Belongs to output stream class
	}
}

void most_denser(countries a,countries b){    //functions declared outside the class 
	if (a.density>b.density){
		cout<<a.country<<"is more denser than "<<b.country<<endl;     //The operator cout is an object Belongs to output stream class
	}
	else{
		cout<<b.country<<"is more denser than "<<a.country<<endl;     //The operator cout is an object Belongs to output stream class
	}
}
int main()
{
	countries i,j;		//creating an object
	i.input(); 		//calling the member functions that are created inside the class.
	i.dens(i.population,i.area);	 		//calling the member functions that are created inside the class.
	j.input(); 		//calling the member functions that are created inside the class.
	j.dens(j.population,j.area); 		//calling the member functions that are created inside the class.
	i.display(); 		//calling the member functions that are created inside the class.
	j.display(); 		//calling the member functions that are created inside the class.
	most_pop(i,j);
	most_denser(i,j);
	return 0;   //int return from main()
}

