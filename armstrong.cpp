/*
153=(1*1*1)+(5*5*5)+(3*3*3)
	=153
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	int duplicate;
	int r;
	int sum_of_cubes_digits=0;
	cout<<"\n Enter a number";
	cin>>n;
	duplicate=n;
	while(n>0)  
	{
		r=n%10;
		sum_of_cubes_digits=sum_of_cubes_digits+(r*r*r);
		n=n/10;
	}
	cout<<"\n Sum of cubes of digits is  "<<sum_of_cubes_digits;
	if (sum_of_cubes_digits==duplicate )
	{
		cout<<"\n "<<duplicate<<" is armstrong number";
	}
	else
	{
		cout<<"\n "<<duplicate<<" is not a armstrong  number";	
	}
}

