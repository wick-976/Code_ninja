//this using the memoizatipon method of dp

#include <bits/stdc++.h> 
using namespace std;

int solve(int idx,vector<int>& nums,vector<int>& ds)
{
    if(idx==0) return nums[idx];

    if(idx<0) return 0;

    if(ds[idx]!=-1) return ds[idx];

    int two=nums[idx] + solve(idx-2,nums,ds);

    int one = 0+solve(idx-1,nums,ds);

    return ds[idx]=max(one,two);
}
int maximumNonAdjacentSum(vector<int> &nums){
    
    vector<int>ds(nums.size(),-1);
    return solve(nums.size()-1,nums,ds);
 
}