// Question 7
// An array is monotonic if it is either monotone increasing or monotone decreasing.

// An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An array nums is
// monotone decreasing if for all i <= j, nums[i] >= nums[j].

// Given an integer array nums, return true if the given array is monotonic, or false otherwise.

// Example 1:
// Input: nums = [1,2,2,3]
// Output: true
#include<bits/stdc++.h>
using namespace std;
bool isMonotonic(vector<int>& nums) {
        int f=0,g=0;
        if(nums.size()==1)
            return true;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<=nums[i+1])
                f=1;
                else
                {
                    f=0;
                    break;
                }
        }
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>=nums[i+1])
                g=1;
            else{
                g=0;
                break;
            }
        }
        if(f==1||g==1)
            return true;
        else
            return false;
    }
int main()
{
    int n;
    cout<<"Enter the size of an array:\n";
    cin>>n;
    cout<<"Enter array elements:\n";
    vector<int>nums(n,0);
    for(int i=0;i<n;i++)
    cin>>nums[i];

    int ans = isMonotonic(nums);
    cout<<"Output is:\n";
    if(ans)
    cout<<"true";
    else
    cout<<"false";
    return 0;
}