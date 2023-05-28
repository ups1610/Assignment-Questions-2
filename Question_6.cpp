// Question 6
// Given an array of integers nums which is sorted in ascending order, and an integer target,
// write a function to search target in nums. If target exists, then return its index. Otherwise,
// return -1.

// You must write an algorithm with O(log n) runtime complexity.

// Input: nums = [-1,0,3,5,9,12], target = 9
// Output: 4

// Explanation: 9 exists in nums and its index is 4
#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]==target)
            return mid;
            else if(nums[mid]<target)
            l=mid+1;
            else
            r=mid-1;
        }
        return -1;
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
    
    int target;
    cout<<"Enter the no to be searched: \n";
    cin>>target;
    int ans = search(nums,target);
    cout<<"Output is:\n";
    cout<<ans<<endl;
}