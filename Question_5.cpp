// Question 5
// Given an integer array nums, find three numbers whose product is maximum and return the maximum product.

// Example 1:
// Input: nums = [1,2,3]
// Output: 6
#include<bits/stdc++.h>
using namespace std;
int maximumProduct(vector<int>& nums) {
		int n = nums.size();
		sort(nums.begin(), nums.end());
		return max(nums[n - 1] * nums[n - 2] * nums[n - 3], nums[0] * nums[1] * nums[n - 1]);
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

    int ans = maximumProduct(nums);
    cout<<"Output is:\n";
    cout<<ans<<endl;
}