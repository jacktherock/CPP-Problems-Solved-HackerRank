/*
    If you have n rupees. You can buy 1 rupee = 1 chocolate and 3 wrappers = 1 chocolate. Then calculate how many chocolates can buy in 15 rupees.
*/

// #include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rupees, total_chocos, a, b, c, d, e, f;
    cout << "Enter rupees: ";
    cin >> rupees;

    total_chocos = rupees;
    a = total_chocos / 3;
    b = total_chocos % 3;
    c = (a + b) / 3;
    d = (a + b) % 3;
    e = (c + d) / 3;

    cout << "Total chocolates: " << total_chocos + a + c + e;

    return 0;
}