#include <iostream>
// #include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    int left = 0, right = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (i == j)
            {
                left += arr[i][j];
            }
            if ((i + j) == (n - 1))
            {
                right += arr[i][j];
            }
        }
    }

    cout << left << endl;
    cout << right << endl;
    int absolute = left - right;
    cout << abs(absolute) << endl;

    return 0;
}