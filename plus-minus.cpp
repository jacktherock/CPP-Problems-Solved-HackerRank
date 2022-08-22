#include <iostream>
// #include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    double pos = 0, neg = 0, zero = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // cout<<arr[i]<<" ";

        if (arr[i] > 0)
        {
            pos += 1;
        }
        else if (arr[i] < 0)
        {
            neg += 1;
        }
        else
        {
            zero += 1;
        }
    }

    double frac_pos = pos / n;
    double frac_neg = neg / n;
    double frac_zero = zero / n;
    cout << frac_pos << endl;
    cout << frac_neg << endl;
    cout << frac_zero << endl;

    return 0;
}