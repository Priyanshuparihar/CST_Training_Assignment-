
#include<bits/stdc++.h>
using namespace std;

vector<int> AllPrime; 

void findAllPrime(int n)
{
	int size = sqrt(n);
	bool prime[n+1];
	
	memset(prime,true,sizeof(prime));x
	for(int i=2; i<=n;i++)
	{
		if(prime[i]==true)
			for(int j=i*2;j<=n;j+=i)
				prime[j]=false;
	}
	for(int i=2;i<=n;i++)
		if(prime[i])
			AllPrime.push_back(i);
}

int noOfWays(int n)
{
	int count =0;	
	for(int i=0;AllPrime[i]<=n;i++) 
	{
		for(int j=1;((j*j<=n) && (AllPrime[i]+j<=n));j++)
		{
			if(n==AllPrime[i]+(2*(pow(j,2))))
				count++;
		}
	}
	return count;
}
int main()
{
	int n,ways=0;
	cout<<"Enter the number to be checked: ";
	cin>>n;
	findAllPrime(n);
	ways=noOfWays(n);
	cout<<"The number of ways are: "<<ways;
	return 0;
}
