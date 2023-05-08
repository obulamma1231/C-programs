/*
1+2+3+4+5=15
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	int sum=0;
	int i=1; 
	cout<<"\n Enter a number";
	cin>>n;
	while(i<=n)  
	{
		sum=sum+i;
		i++;
	}
	cout<<"\n Sum of 1 to "<<n<<" is "<<sum;
}
