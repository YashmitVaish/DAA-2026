#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int left = 0;
    int right = nums.size()-1;
    
    while(left<right){
        int mid = (left+right)/2;
        if (nums[mid] == 23){
            cout<< mid;
            break;
        }else if(nums[mid]>23){
            right = mid-1;
        }else{
            left = mid+1;
        }
    }
    

    return 0;
}