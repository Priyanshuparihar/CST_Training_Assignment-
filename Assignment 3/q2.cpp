
#include <iostream>
using namespace std;
int main()
{
	int a[50],n,count=0;
	cout<<"Enter the number of elements in array: ";
 	cin>>n;
 	cout<<"Enter the array:\n";
 	for(int i=0;i<n;i++)
 		cin>>a[i];
 	for(int i=0;i<n;i++)
 	{
 		for(int j=i+1;j<n;j++)
 		{
 			if(a[i]+a[j]>0)
 			{
 				count+=1;
 			}
 		}
 	}
 	cout<<"The number of pairs are: "<<count;
	return 0;
}
