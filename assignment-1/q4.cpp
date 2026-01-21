#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int maxSubarraySum(vector<int>& arr)
{
    int current_sum = arr[0];
    int max_sum = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        current_sum = max(arr[i], current_sum + arr[i]);
        max_sum = max(max_sum, current_sum);
    }

    return max_sum;
}

int main()
{
    vector<int> arr = {-2, -5, 6, -2,-3,1,5,-6};
    cout << maxSubarraySum(arr);
    return 0;
}
