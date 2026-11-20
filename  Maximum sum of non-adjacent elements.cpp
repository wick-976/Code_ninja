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


//space optimization method

#include <bits/stdc++.h> 
int maximumNonAdjacentSum(vector<int> &nums){
    
    int prev=nums[0];
    int prev2=0;

    for(int i=1;i<nums.size();i++)
    {
        int take=nums[i];

        if(i>1) take=take+prev2;

        int not_take=0+prev;

        int curr=max(take,not_take);

         prev2=prev;
         prev=curr;

    }

    return prev;
}