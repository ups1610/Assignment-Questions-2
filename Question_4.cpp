// Question 4
// You have a long flowerbed in which some of the plots are planted, and some are not.
// However, flowers cannot be planted in adjacent plots.
// Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return true if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule and false otherwise.

// Example 1:
// Input: flowerbed = [1,0,0,0,1], n = 1
// Output: true
#include<bits/stdc++.h>
using namespace std;
bool canPlaceFlowers(vector<int>& flowerbed) {
        int i=0;
        int cnt=0;
        int n = flowerbed.size();
        if(flowerbed.size()==1)
        {
            if(flowerbed[0]==0 && n==1)
            return true;
            else if(flowerbed[0]==1 && n==0)
            return true;
            else if(flowerbed[0]==0 && n==0)
            return true;
            else
            return false;
        }    
        for(i=0;i<flowerbed.size();i++)
        {  
            if(i==0)
        {
            if(flowerbed[i+1]==0 && flowerbed[i]==0)
            {
                flowerbed[i]=1;
                cnt++;
            }
        }      
            else if(i==flowerbed.size()-1)
        {
            if(flowerbed[i-1]==0 && flowerbed[i]==0){
            flowerbed[i]=1;
            cnt++;
            }
        }   
               else if(flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0){
               cnt++;
               flowerbed[i]=1;
               }
        }
        
        if(cnt>=n)
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

    bool ans = canPlaceFlowers(nums);
    cout<<"Output is:\n";
    if(ans)
    cout<<"false";
    else
    cout<<"true";
}