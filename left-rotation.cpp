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

int arrayGet(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void Main()
{
    int n;
    cin >> n;
    int rotate;
    cin >> rotate;
    int arr[n];
    arrayGet(arr, n);
 
    for (int i = 0; i < rotate - 1; i++)
    {
        for (int j = i; j < rotate; j++)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    for (int i = rotate; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
 
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
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
5 4
1 2 3 4 5

Output
5 1 2 3 4 

*/