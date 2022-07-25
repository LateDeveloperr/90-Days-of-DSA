#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int arr[n] = { 1, 5, 8, 10 };
    int k = 2;


    for (int i = 0;i < n;i++)
    {
        if (arr[i] > k)
            arr[i] = arr[i] - k;
        else
            arr[i] = arr[i] + k;
    }


    int max = 0;
    int min = arr[0];
    int ans = max - min;

    for (int i = 0; i < n;i++)
    {
        if (arr[i] > max) {
            max = arr[i];
        }

    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }


    cout << ans << endl;

    return 0;

}