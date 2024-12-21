#include <iostream>
//average marks
using namespace std;
class student{
	string name;
	int sem,no_of_sub,marks,avg_marks;
	public:
		void input(){
			cout<<"Enter student name:";
			cin>>name;
			cout<<"enter the semester:";
			cin>>sem;
			cout<<"Enter no of subjects:";
			cin>>no_of_sub;
			cout<<"Enter no of marks:";
			cin>>marks;
		}
		void put_avgm(int avg){
			avg_marks=avg;
		}
		int get_sub(){
			return(no_of_sub);
		}
		int get_marks(){
			return(marks);
		}
		void result(){
			cout<<"The average marks are "<<avg_marks;
		}
};
void avg_marks(student a){
	a.put_avgm(a.get_marks()/a.get_sub());
}
int main(){
	student a;
	a.input();
	avg_marks(a);
	a.result();
	
}
