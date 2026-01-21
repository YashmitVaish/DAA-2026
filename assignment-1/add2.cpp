#include <iostream>
#include <vector>

using namespace std;

int goodSubSeq(vector<int> &arr)
{
    if (arr.empty()) return 0;

    sort(arr.begin(), arr.end());

    int left = 0;
    int ans = 0;

    for (int right = 0; right < arr.size(); right++)
    {
        while (arr[right] - arr[left] > 10)
        {
            left++;
        }

        ans = max(ans, right - left + 1);
    }

    return ans;
}