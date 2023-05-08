/*
6 factors is 1 ,2 ,3 and sum of factors 1+2+3=6
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	int i=1;
	int sum_of_factors=0; 
	cout<<"\n Enter a number";
	cin>>n;
	while(i<=n)  
	{
		if(n%i==0)
		{
			cout<<i<<"\n";
			sum_of_factors=sum_of_factors+i;
			
		}
		i++;
	}
	cout<<"\n Sum of factors is "<<sum_of_factors;
	if (sum_of_factors== 2*n)
	{
		cout<<"\n "<<n<<" is perfect  number";
	}
	else
	{
		cout<<"\n "<<n<<" is not perfect  number";	
	}
}

