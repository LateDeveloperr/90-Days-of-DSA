#include <iostream>
#include <climits>
using namespace std;

int maxSubArraySum(int arr[], int n) {
    int max_ending_here = 0;
    int max_so_far = INT_MIN;

    for (int i = 0; i < n; i++) {
        max_ending_here = max_ending_here + arr[i];
        if (max_so_far < max_ending_here) {
            max_so_far = max_ending_here;
        }

        if (max_ending_here < 0) {
            max_ending_here = 0;
        }
    }

    return max_so_far;
}
int main() {
    int arr[8] = { -2, -3, 4, -1, -2, 1, 5, -3 };
    int n = 8;

    int max_sum = maxSubArraySum(arr, n);

    cout << max_sum << " ";

    return 0;
}