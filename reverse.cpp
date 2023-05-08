/*
123 reverse 321 
*/
#include<iostream>
using namespace std;
int main()
{
	int n,r;
	int rev=0; 
	cout<<"\n Enter a number";
	cin>>n;
	while(n>0)  
	{
		r=n%10;      
		rev=rev*10+r;
		n=n/10;
	}
	cout<<"\n Reverse is "<<rev;
	
}
