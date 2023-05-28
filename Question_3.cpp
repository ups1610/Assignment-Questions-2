// Question 3
// We define a harmonious array as an array where the difference between its maximum value
// and its minimum value is exactly 1.

// Given an integer array nums, return the length of its longest harmonious subsequence
// among all its possible subsequences.

// A subsequence of an array is a sequence that can be derived from the array by deleting some or no elements without changing the order of the remaining elements.

// Example 1:
// Input: nums = [1,3,2,2,5,2,3,7]
// Output: 5

// Explanation: The longest harmonious subsequence is [3,2,2,2,3].
#include<bits/stdc++.h>
using namespace std;
int findLHS(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int result=0;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(mp.find(it->first-1)!=mp.end())
            {
                result=max(result,it->second+mp[it->first-1]);
            }
        }
        return result;
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

    int ans = findLHS(nums);
    cout<<"Output is:\n";
    cout<<ans<<endl;
}
