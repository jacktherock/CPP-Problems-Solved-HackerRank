#include <iostream>
// #include<bits/stdc++.h>
using namespace std;

int main()
{

    int size, second_max;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    // sorted array using selection sort
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                // swap variables
                second_max = arr[j];
                arr[j] = arr[i];
                arr[i] = second_max;
            }
        }
    }
    cout << "Second max : " << second_max;

    return 0;
}