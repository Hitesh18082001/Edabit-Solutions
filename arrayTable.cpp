#include <iostream>
using namespace std;
int table(int m, int n)  //this function prints the array of table
{
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		arr[i]=m*(i+1);
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" "; 
		
	}
	return 0;
}

int main()
{
int a,b;            //input two numbers
cout<<"enter the number of which you want table:";
cin>>a;
cout<<"enter the size of table:";
cin>>b;
table(a,b);	
return 0;
}
