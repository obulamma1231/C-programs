#include<iostream>
using namespace std;

int main()
{
	int i,j,n,k;
	cout<<"\n Enter a number";
	cin>>n;
	i=1;
	k=1;
	 while(i<=n)
	 {
	   j=1;
	   while(j<=i)
	   {
	   	 cout<<k<<" ";  //1 //2 2 // 3 3 3 //4 4 4 4 
	   	 j++;
	   	 k++;
	   }
	   cout<<"\n";        
	   i++;
	}
}
