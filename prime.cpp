/*
the number is multiply with 1 and itself 
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	int i=1;
	int count=0; 
	cout<<"\n Enter a number";
	cin>>n;
	while(i<=n)  
	{
		if(n%i==0)
		{
			cout<<i<<"\n";
			count++;
		}
		i++;
	}
	cout<<"\n Number of factors of "<<n<<" is "<<count;
	if (count==2)
	{
		cout<<"\n"<<n<<" is Prime Number";
	}
	else
	{
		cout<<"\n"<<n<<" is not a prime";
	}
}
