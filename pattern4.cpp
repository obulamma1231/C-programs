#include<iostream>
using namespace std;
int main()
{
	int i,j,n,k;
	cout<<"\n enter a number";
	cin>>n;
	i=1;
	k=1;
	while(i<=n)
	{
		j=1;
		while(j<=i)
		{
			cout<<k<<" ";
			j++;
			k++;
		}
		cout<<"\n";
		i++;
	}
}
