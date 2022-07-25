#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void segregateElements(int arr[], int n)
{
    //creating an extra array to store elements first
    int temp[n];

    int j = 0;

    // transferring positive elements to temp array
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
            temp[j++] = arr[i];
    }

    // if temp contains all +ve and all -ve elements than return
    if (j == n || j == 0)
        return;

    // copy -ve elements in temp now
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            temp[j++] = arr[i];
    }

    //copy content of temp[] to arr[]
    memcpy(arr, temp, sizeof(temp));
}


int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }

    segregateElements(arr, n);

    for (int i = 0;i < n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}