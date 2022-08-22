#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (j = n; j > n - i; j--)
        {
            cout << "#";
        }
        cout << "\n";
    }
    return 0;
}