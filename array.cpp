/*no.of elements=5
1+2+3+4+5=15
avg=sum of elements /no.of elements=15/5=3
*/

#include<iostream>
using namespace std;

int main()
{
	int a[5]; 
	int i;
	int sum=0;
	float avg;
	
	for(i=0;i<5;i++)
	{
		cout<<"\n Enter a number";
		cin>>a[i];
		sum=sum+a[i];
		
	}
	avg =sum/5.0;
	cout<<"\n Sum is "<<sum;
	cout<<"\n Average is"<<avg;
	return 0;
}
 
 
 
