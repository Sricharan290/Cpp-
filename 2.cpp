#include <iostream> //allows us to read and write into files.
using namespace std; //a library that wrapped all the standard libraries
class omass{ //Creation of class
    float Min_temp, Max_temp;           //member variables are declared.
    bool water_existance, o2_existance;      //member variables are declared.
    public:
    	void input(){   //member function.
	    cout<<"Enter the Minimum Temperature of the planet Earth:";
	    cin>>Min_temp;
	    cout<<"Enter the Maximum Temperature of the planet Earth:";
	    cin>>Max_temp;
	    cout<<"Does water exist on your Earth (True / False):";
	    cin>>water_existance;
	    cout<<"Does oxygen exist on your Earth (True / False):";
	    cin>>o2_existance;
	    
		}
		void Temp_range(){  //member function
			cout<<"The temperature range of given planet is:"<<Max_temp-Min_temp<<endl;
		}
		void life(){    //member function
			if (water_existance == 1 and o2_existance == 1)
			cout<<"Life is possible on your planet."<<endl;
			else 
			cout<<"Life is not possible on your planet."<<endl;
		}
		void avg_temp(){    //member function
			cout<<"The average temperature of your planet is "<<((Min_temp + Max_temp)/2)<<endl;
		}
	
}; //Body of the class is closed.
int main()
{
	omass f1;
	f1.input();
	f1.Temp_range();
	f1.life();
	f1.avg_temp();
    /*
	int  no_of_sat, radiation_level;
    float diameter, Min_temp, Max_temp, dist_from_sun, inclination_angle, rotation_period;
    bool water_existance, o2_existance;
    string color;
    cout<<"Enter the diameter of Earth:";
    cin>>diameter;
    cout<<"Enter the Minimum Temperature of the planet Earth:";
    cin>>Min_temp;
    cout<<"Enter the Maximum Temperature of the planet Earth:";
    cin>>Max_temp;
    
    cout<<"Enter the distance from Sun to Earth:";
    cin>>dist_from_sun;
    cout<<"Does water exist on planet Earth (True / False):";
    cin>>water_existance;
    cout<<"Does oxygen exist on planet Earth (True / False):";
    cin>>o2_existance;
    cout<<"Enter the no of satellites around the planet Earth:";
    cin>>no_of_sat;
    cout<<"Enter the rotatioin period of planet Earth";
    cin>>rotation_period;
    cout<<"Enter the inclination angle of planet Earth:";
    cin>>inclination_angle;
    cout<<"Enter the radiation level of planet Earth";
    cin>>radiation_level;
    cout<<"Enter the color of planet Earth:";
    cin>>color;
    cout<<"The diameter of Earth is "<<diameter<<endl;
   cout<<"The Minimum Temperature of planet Earth is "<<Min_temp<<endl; 
    cout<<"The Maximum Temperature of planet Earth is "<<Max_temp<<endl;   
    cout<<"The distance from Sun to Earth is "<<dist_from_sun<<endl;
    if (water_existance==true)
     cout<<"There is water on planet Earth."<<endl;   
    else
        cout<<"There is no water on planet Earth."<<endl;
    if (o2_existance==true)
     cout<<"There is oxygen on planet Earth."<<endl;   
    else
        cout<<"There is no oxygen on planet Earth."<<endl;    
    cout<<"The no of satellites around planet Earth are "<<no_of_sat<<endl;
    cout<<"Rotatioin period of planet Earth is "<<rotation_period<<endl;
    cout<<"Inclination angle of planet Earth is "<<inclination_angle<<endl;
    cout<<"Radiation level of planet Earth is "<<radiation_level<<endl;    
    cout<<"The color of planet Earth is "<<color<<endl;
    */
	return 0; 
    
}
