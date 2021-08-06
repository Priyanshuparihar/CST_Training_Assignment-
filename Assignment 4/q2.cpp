
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string num;
	int val,count=0;
	cout<<"Enter the number: ";
	getline(cin,num);
	int match[10]={6,2,5,5,4,5,6,3,7,6};
	string::iterator i;
	for(i=num.begin();i!=num.end();i++)
	{
		val = *i-'0';
		count = count + match[val];
	}
	cout<<"The number of matchsticks required are: "<<count;
	return 0;
}
