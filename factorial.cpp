#include<iostream>
using namespace std;
int main()
{
	int n;
	int i=1; 
	int fact=1;
	cout<<"\n Enter a number";
	cin>>n;
	while(i<=n)   
	{
		fact=fact *i;
		i++;
	}
	cout<<"\n Factorial of "<<n<<" is "<<fact;
}
