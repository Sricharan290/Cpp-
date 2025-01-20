#1
#include <iostream> //allows us to read from files and write into files.
//using namespace std;  //all libraries are wrapped into std.
int main()
{
	int a=6;
	int b=0;
	while (a<10)
	{
		a=a/12 +1;
		a=a+b;
	}
	std::cout<<a; // :: stands for 'Scope resolution operator'  // its an object that belongs to ostream
	return 0;   //cout is defined under the scope of std
}

#2
#include <iostream> //allows us to read from files and write into files.
//using namespace std; //all libraries are wrapped into std.
int main(){
 float sum =0.0, j=1.0, i=2.0;
while(i/j>0.0625)
{
	j=j+j;
	sum=sum+i/j;
	std::cout<<sum<<endl;  // its an object that belongs to ostream
}
return 0;
}

#3
#include <iostream> //allows us to read from files and write into files.
using namespace std;  //all libraries are wrapped into std.
int main()
{
	int i,j,count;
	count=0;
	i=0;
	for (j=-3;j<=3;j++)
	{
		if ((j>=0) && (i++))
		count=count+j;
	}
	count=count+i;
	cout<<count<<endl;  // its an object that belongs to ostream
	return 0;
}

#4
#include <iostream> //allows us to read from files and write into files.
using namespace std; //all libraries are wrapped into std.
int main()
{
	int A=9,B=3;
	while (A!=B)
	{
		if(A>B)
		A-=B;
		else
		B-=A;
	}
	cout<<A;   // its an object that belongs to ostream
	return 0;
}

#5
#include <iostream> //allows us to read from files and write into files.
using namespace std;  //all libraries are wrapped into std.
int funcp()
{
	static int x=1;
	x++;
	return x;
}
int main()
{
	int x,y;
	x=funcp();
	y=funcp()+x;
	cout<<(x+y)<<endl;  // its an object that belongs to ostream
	return 0;	
}


#6
#include <iostream> //allows us to read from files and write into files.
using namespace std; //all libraries are wrapped into std.
int foo(int x, int y, int q)
{
	if((x<=0) && (y<=0))
	return q;
	if(x<=0)
	return foo(x,y-q,q);
	if(y<=0)
	return foo(x-q,y,q);
	return foo(x,y-q,q) + foo(x-q,y,q);
}
int main()
{
	int r=foo(15,15,10);
	cout<<r;  // its an object that belongs to ostream
	return 0;
}
