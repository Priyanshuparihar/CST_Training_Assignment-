
#include <bits/stdc++.h>
using namespace std;
bool checkPerfectcube(int n)
{
    int d = cbrt(n);
    if (d * d * d == n)
        return true;
    return false;
}
int largestNonPerfectcubeNumber(int a[], int n)
{
    int maxi = -1;
    for (int i = 0; i < n; i++) 
        if (!checkPerfectcube(a[i]))
            maxi = max(a[i], maxi); 
    return maxi;
}
int main()
{
    int a[50],n;
 	cout<<"Enter the number of elements in array: ";
 	cin>>n;
 	cout<<"Enter the array:\n";
 	for(int i=0;i<n;i++)
 		cin>>a[i];
    cout<<"The largets non perfect cube is: "<<largestNonPerfectcubeNumber(a, n);
    return 0;
}
