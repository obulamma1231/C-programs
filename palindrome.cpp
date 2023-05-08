/*
121=121 is palindrome
123=321 is not palindrome
*/
#include<iostream>
using namespace std;
int main()
{
	int duplicate,n,r;
	int rev=0; 
	cout<<"\n Enter a number";
	cin>>n;
	duplicate=n;
	while(n>0)  
	{
		r=n%10;      
		rev=rev*10+r;
		n=n/10;
	}
	cout<<"\n Reverse is "<<rev;

	if (rev==duplicate)
	{
		cout<<"\n"<<duplicate<<" is palindrome";
	}
	else
	{
		cout<<"\n"<<duplicate<<" is not a palindrome ";
	}
}

