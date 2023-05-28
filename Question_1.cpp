//  **Question 1**
// Given an integer array nums of 2n integers, group these integers into n pairs (a1, b1), (a2, b2),..., (an, bn) such that the sum of min(ai, bi) for all i is maximized. Return the maximized sum.

// **Example 1:**
// Input: nums = [1,4,3,2]
// Output: 4

// **Explanation:** All possible pairings (ignoring the ordering of elements) are:

// 1. (1, 4), (2, 3) -> min(1, 4) + min(2, 3) = 1 + 2 = 3
// 2. (1, 3), (2, 4) -> min(1, 3) + min(2, 4) = 1 + 2 = 3
// 3. (1, 2), (3, 4) -> min(1, 2) + min(3, 4) = 1 + 3 = 4
// So the maximum possible sum is 4

#include<bits/stdc++.h>
using namespace std;

/*
        Solution: First sort the input array, then pair up elements next to each other that way we dont
        loose much to min() between pair.  
*/

int sun_maximised(vector<int>&nums){
     int n = nums.size();
     sort(nums.begin(),nums.end());
     int ans=0;
     for(int i=0;i<n;i+=2)
     {
       ans+= min(nums[i],nums[i+1]);
     } 
     return ans;
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

    int ans = sun_maximised(nums);
    cout<<"Output is:\n";
    cout<<ans<<endl;
}
