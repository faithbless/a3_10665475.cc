#include <iostream>

using namespace std;
int main()
{

int score=0;
cout <<"Enter your score \n";
cin>>score;

if(score>=80 && score<=100)
{
	cout <<"A";
	}
 else if(score >=75 && score<=79)
{
	cout<<"B+";
}
else if(score>=70 && score<=74)
{
	cout<<"B";
}
		
	else if(score>=65 && score<=69)
	{
		cout<<"C+"; 
		
	}
	else if (score>=60 && score<=64)
	{
		cout<<"C";
	}
	
	else if(score>=55 && score<=59)
	{
		cout<<"D+";
	}
	else if(score>=50&&score<=54)
	{
		cout<<"D";
	
	}
	
	else if(score>=45&&score<=49)
	{
		cout<<"E";
	}
	else if(score>=0&&score<=44)
	{
		
}
	
	
	

	
	
	
	
	return 0;
}
