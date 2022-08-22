// #include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int arr[3] = {1,2,3};
    // cout<<arr[0];
    // cout<<arr[1];
    // cout<<arr[2];
    // cout<<arr[3];

    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " array element: ";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "Sum of array: " << sum;
    return 0;
}