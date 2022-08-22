#include <iostream>
// #include<bits/stdc++.h>
using namespace std;

int main()
{

    int n = 5;
    // cin >> n;
    int arr[n];
    int i;
    long long sum = 0;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << sum - arr[n - 1] << " " << sum - arr[0] << endl;

    return 0;
}