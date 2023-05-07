#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"\n enter a number";
	cin>>n;
	i=1;
	while(i<=n)
	{
		j=1;
		while(j<=i)
		{
			cout<<j<<" ";
			j++;		
		}
		cout<<"\n";
		i++;
	}
}

