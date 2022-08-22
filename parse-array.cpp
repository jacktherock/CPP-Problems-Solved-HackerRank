#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void file_i_o()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void Main()
{

    map<string, int> count;
    int n, q;
    cin >> n;
    while (n--)
    {
        string strings;
        cin >> strings;
        count[strings]++;
    }
    cin >> q;
    while (q--)
    {
        string query;
        cin >> query;
        // cout<<query<<endl;
        cout << count[query] << endl;
    }
}

int main()
{
    clock_t begin = clock();
    file_i_o();

    Main();

#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC << " seconds";
#endif

    return 0;
}

/*
Input

4
aba
baba
aba
xzxb
3
aba
xzxb
ab

Output
2
1
0

*/