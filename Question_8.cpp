// Question 8
// You are given an integer array nums and an integer k.

// In one operation, you can choose any index i where 0 <= i < nums.length and change nums[i] to nums[i] + x where x is an integer from the range [-k, k]. You can apply this operation at most once for each index i.

// The score of nums is the difference between the maximum and minimum elements in nums.

// Return the minimum score of nums after applying the mentioned operation at most once for each index in it.

// Example 1:
// Input: nums = [1], k = 0
// Output: 0

// Explanation: The score is max(nums) - min(nums) = 1 - 1 = 0.
#include<bits/stdc++.h>
using namespace std;
 int smallestRangeI(vector<int>& nums, int k) {
        int mx=0,mn=9999;
       for(int i=0;i<nums.size();i++)
       {
           mx=max(mx,nums[i]);
           mn=min(mn,nums[i]);
       }
        if(mn+k<mx-k)
            return mx-mn-2*k;
        else
            return 0;
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
    int k;
    cout<<"Enter the value of k:\n";
    cin>>k;
    int ans = smallestRangeI(nums,k);
    cout<<"Output is:\n";
    cout<<ans<<endl;
}    