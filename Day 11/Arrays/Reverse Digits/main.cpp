#include <iostream>
using namespace std;
void reverse(int arr[], int n)
{

    int x = arr[n - 1], i;
    for (i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = x;
}
int main()
{
    int arr[3] = { 2, 2, 1 };
    int n = 3;

    // Function call
    reverse(arr, n);

    // Print the reverse array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}