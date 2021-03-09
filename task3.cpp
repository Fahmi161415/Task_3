// Accessing the eleents or Array
#include <iostream>
using namespace std;
int main()
{
	int i,n,a[n];
	cout<<"How many elements you want to enter :";
	cin>>n;
	cout<<"Enter the  eleents of array :";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"You entered :";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	
}
