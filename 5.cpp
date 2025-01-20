#include <iostream> //allows us to read and write into files.
//average marks
using namespace std; //a library that wrapped all the standard libraries
class student{  //Creation of class
	string name;      //member variables are declared.
	int sem,no_of_sub,marks,avg_marks;  //member variables are declared.
	public:		//public is scope
		void input(){  //member function.
			cout<<"Enter student name:";     //The operator cout is an object Belongs to output stream class
			cin>>name;				// cin is as input object that belongs to the input stream class
			cout<<"enter the semester:";     //The operator cout is an object Belongs to output stream class
			cin>>sem;				// cin is as input object that belongs to the input stream class
			cout<<"Enter no of subjects:";     //The operator cout is an object Belongs to output stream class
			cin>>no_of_sub;				// cin is as input object that belongs to the input stream class
			cout<<"Enter no of marks:";     //The operator cout is an object Belongs to output stream class
			cin>>marks;				// cin is as input object that belongs to the input stream class
		}
		void put_avgm(int avg){   //member function.
			avg_marks=avg;
		}
		int get_sub(){         //member function.
			return(no_of_sub);
		}
		int get_marks(){          //member function.
			return(marks);
		}
		void result(){           //member function.
			cout<<"The average marks are "<<avg_marks;
		}
};  //Body of the class is closed.
void avg_marks(student a){
	a.put_avgm(a.get_marks()/a.get_sub());
}
int main(){
	student a;		//creating an object
	a.input(); 		//calling the member functions that are created inside the class.
	avg_marks(a);
	a.result(); 		//calling the member functions that are created inside the class.
	return 0;   //int return from main()
}
