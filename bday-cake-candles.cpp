#include <bits/stdc++.h>
using namespace std;

void file_i_o()
{
#ifndef ONLINE_JUDGE
    freopen("IO-CP/input.txt", "r", stdin);
    freopen("IO-CP/output.txt", "w", stdout);
#endif
}

// int max(int a,int b) {
//     return (a>b?a:b);
// }

int main()
{
    // file_i_o();

    int n, i, count = 0, max_no = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        max_no=(max_no<arr[i]?arr[i]:max_no);
    }
    for (int i = 0; i < n; i++)
    {
        if (max_no == arr[i])
        {
            count++;
        }
    }

    cout << count;

    return 0;
}
