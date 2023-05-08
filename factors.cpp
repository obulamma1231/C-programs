/* factors of 8 is 1,2,4,8
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
}

