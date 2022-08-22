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
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int grade;
        cin >> grade;

        if (grade < 38)
        {
            cout << grade << endl;
            continue;
        }

        int mult = grade % 5;
        if (5 - mult < 3)
        {
            grade += 5 - mult;
        }
        cout << grade << endl;
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
73
67
38
33
*/