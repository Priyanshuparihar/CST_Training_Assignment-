
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int maxNum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxNum)
        {
            maxNum = arr[i];
        }
    }
    cout << "Max number from array is:\t" << maxNum << "\n";

    int i = 1, noOfStair = 0, blockUsed = 0;
    while (blockUsed + i <= maxNum)
    {
        noOfStair++;
        blockUsed += i;
        i++;
    }
    cout << "Max no of stairs from the given array is: " << noOfStair;

    return 0;
}
