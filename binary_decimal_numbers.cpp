// #include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Decimal to Binary */
    int n;
    cin >> n;

    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        /* Decimal to Binary */
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;

        /* Binary to Decimal */
        // int digit = n%10;
        // ans = (digit*pow(2, i)) + ans;
        // n=n/10;
        // i++;

        /* Reverse flow integer */
        // ans=(digit*pow(10,i))+ans;

        /* Same flow Integer */
        // ans = (ans*10)+digit;
    }
    cout << ans << endl;
    return 0;
}