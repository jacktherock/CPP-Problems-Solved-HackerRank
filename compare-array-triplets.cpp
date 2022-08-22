#include <iostream>
// #include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3;
    int x = 0, y = 0;
    int a[n], b[n];
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i])
        {
            x += 1;
        }
        else if (a[i] == b[i])
        {
            continue;
        }
        else
        {
            y += 1;
        }
    }
    cout << x << " " << y;

    return 0;
}