#include <iostream> //allows us to read and write into files.
using namespace std; //a library that wrapped all the standard libraries
class omass{ //Creation of class
    float Min_temp, Max_temp;           //member variables are declared.
    bool water_existance, o2_existance;      //member variables are declared.
    public:		//public is scope
    	void input(){   
	    cout<<"Enter the Minimum Temperature of the planet Earth:";		//The operator cout is an object Belongs to output stream class
	    cin>>Min_temp;				// cin is as input object that belongs to the input stream class
	    cout<<"Enter the Maximum Temperature of the planet Earth:";		//The operator cout is an object Belongs to output stream class
	    cin>>Max_temp;			// cin is as input object that belongs to the input stream class
	    cout<<"Does water exist on your Earth (True / False):";			//The operator cout is an object Belongs to output stream class
	    cin>>water_existance;			// cin is as input object that belongs to the input stream class
	    cout<<"Does oxygen exist on your Earth (True / False):";			//The operator cout is an object Belongs to output stream class
	    cin>>o2_existance;			// cin is as input object that belongs to the input stream class
	    
		};  //declared a function and defined it ouside.
		void Temp_range(){  //member function
			cout<<"The temperature range of given planet is:"<<Max_temp-Min_temp<<endl;     //The operator cout is an object Belongs to output stream class
		}
		void life(){    //member function
			if (water_existance == 1 and o2_existance == 1)
			cout<<"Life is possible on your planet."<<endl;				//The operator cout is an object Belongs to output stream class
			else 
			cout<<"Life is not possible on your planet."<<endl;			//The operator cout is an object Belongs to output stream class
		}
		void avg_temp(){    //member function
			cout<<"The average temperature of your planet is "<<((Min_temp + Max_temp)/2)<<endl;		//The operator cout is an object Belongs to output stream class
		}
	
}; //Body of the class is closed.


int main()
{
	omass f1;
	f1.input();
	f1.Temp_range();
	f1.life();
	f1.avg_temp();
	int  no_of_sat, radiation_level;
    float diameter, Min_temp, Max_temp, dist_from_sun, inclination_angle, rotation_period;
    bool water_existance, o2_existance;
    string color;
    cout<<"Enter the diameter of Earth:";			//The operator cout is an object Belongs to output stream class
    cin>>diameter;			// cin is as input object that belongs to the input stream class
    cout<<"Enter the Minimum Temperature of the planet Earth:";			//The operator cout is an object Belongs to output stream class
    cin>>Min_temp;			// cin is as input object that belongs to the input stream class
    cout<<"Enter the Maximum Temperature of the planet Earth:";			//The operator cout is an object Belongs to output stream class
    cin>>Max_temp;			// cin is as input object that belongs to the input stream class
    
    cout<<"Enter the distance from Sun to Earth:";			//The operator cout is an object Belongs to output stream class
    cin>>dist_from_sun;			// cin is as input object that belongs to the input stream class
    cout<<"Does water exist on planet Earth (True / False):";			//The operator cout is an object Belongs to output stream class
    cin>>water_existance;			// cin is as input object that belongs to the input stream class
    cout<<"Does oxygen exist on planet Earth (True / False):";			//The operator cout is an object Belongs to output stream class
    cin>>o2_existance;			// cin is as input object that belongs to the input stream class
    cout<<"Enter the no of satellites around the planet Earth:";			//The operator cout is an object Belongs to output stream class
    cin>>no_of_sat;			// cin is as input object that belongs to the input stream class
    cout<<"Enter the rotatioin period of planet Earth";			//The operator cout is an object Belongs to output stream class
    cin>>rotation_period;			// cin is as input object that belongs to the input stream class
    cout<<"Enter the inclination angle of planet Earth:";			//The operator cout is an object Belongs to output stream class
    cin>>inclination_angle;			// cin is as input object that belongs to the input stream class
    cout<<"Enter the radiation level of planet Earth";			//The operator cout is an object Belongs to output stream class
    cin>>radiation_level;			// cin is as input object that belongs to the input stream class
    cout<<"Enter the color of planet Earth:";			//The operator cout is an object Belongs to output stream class
    cin>>color;			// cin is as input object that belongs to the input stream class
    cout<<"The diameter of Earth is "<<diameter<<endl;			//The operator cout is an object Belongs to output stream class
   cout<<"The Minimum Temperature of planet Earth is "<<Min_temp<<endl; 			//The operator cout is an object Belongs to output stream class
    cout<<"The Maximum Temperature of planet Earth is "<<Max_temp<<endl;   			//The operator cout is an object Belongs to output stream class
    cout<<"The distance from Sun to Earth is "<<dist_from_sun<<endl;			//The operator cout is an object Belongs to output stream class
    if (water_existance==true)
     cout<<"There is water on planet Earth."<<endl;   			//The operator cout is an object Belongs to output stream class
    else
        cout<<"There is no water on planet Earth."<<endl;			//The operator cout is an object Belongs to output stream class
    if (o2_existance==true)
     cout<<"There is oxygen on planet Earth."<<endl;   			//The operator cout is an object Belongs to output stream class
    else
        cout<<"There is no oxygen on planet Earth."<<endl;    			//The operator cout is an object Belongs to output stream class
    cout<<"The no of satellites around planet Earth are "<<no_of_sat<<endl;			//The operator cout is an object Belongs to output stream class
    cout<<"Rotatioin period of planet Earth is "<<rotation_period<<endl;			//The operator cout is an object Belongs to output stream class
    cout<<"Inclination angle of planet Earth is "<<inclination_angle<<endl;			//The operator cout is an object Belongs to output stream class
    cout<<"Radiation level of planet Earth is "<<radiation_level<<endl;    			//The operator cout is an object Belongs to output stream class
    cout<<"The color of planet Earth is "<<color<<endl;			//The operator cout is an object Belongs to output stream class

	return 0;   //int return from main()
    
}
