
#include <iostream>
#include <vector>
using namespace std;
 
// Naive solution to find the minimum and maximum number in an array
void findMinAndMax(vector<int> const &nums, int &min, int &max)
{
    // initialize minimum and maximum element with the first element
    max = nums[0], min = nums[0];
 
    // do for each array element
    for (int i = 1; i < nums.size(); i++)
    {
        // if the current element is greater than the maximum found so far
        if (nums[i] > max) {
            max = nums[i];
        }
 
        // if the current element is smaller than the minimum found so far
        else if (nums[i] < min) {
            min = nums[i];
        }
    }
}
 
int main()
{
    vector<int> nums = { 5, 7, 2, 4, 9, 6 };
 
    // to store minimum and maximum element, respectively
    int min, max;
 
    findMinAndMax(nums, min, max);
 
    cout << "The minimum array element is " << min << endl;
    cout << "The maximum array element is " << max << endl;
 
    return 0;
}