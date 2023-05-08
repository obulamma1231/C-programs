/*
3*1=3
3*2=6
3*3=9
3*4=12
3*5=15
3*6=18
3*7=21
3*8=24
3*9=27
3*10=30
*/
#include<iostream>
using namespace std;
int main()
{

	int n;
	int i=1;
	cout<<"\n Enter a number";
	cin>>n;
	while(i<=10) 
	{
		cout<<"\n"<<n<<" * "<<i<<" = "<<n*i;
		i++;
	}
	cout<<"to exit the loop i value is"<<i;
}
