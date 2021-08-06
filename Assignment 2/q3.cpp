
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of 2-D array\n";
    cin >> n;
    cout << "Entered size is \t" << n << "\n";

    int arr[n][n], x;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Entered array is:\n";
    cout << "[\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\t[ ";

        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "]\n";
    }
    cout << "\n]\n";

    cout << "Please enter the number to be searched\n";
    cin >> x;
    cout << "You have entered:\t" << x << endl;

    if (x < arr[0][0] || x > arr[n - 1][n - 1])
    {
        cout << x << " not found\n";
    }
    else
    {
        int i = 0, j = n - 1;
        unsigned char isFound = 0;
        while (i < n && j >= 0)
        {
            if (arr[i][j] > x)
            {
                j--;
            }
            else if (arr[i][j] < x)
            {
                i++;
            }
            else
            {
                isFound = isFound | 1;
                break;
            }
        }
        if (isFound)
        {
            cout << x << "is found at:\t" << i << "," << j << endl;
        }
        else
        {
            cout << x << " not found\n";
        }
    }

    return 0;
}
