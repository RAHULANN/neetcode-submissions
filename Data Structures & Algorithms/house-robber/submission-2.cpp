class Solution {
public:

    int robSolveUsingMemo(vector<int>& nums,int i,vector<int>&dp){
     if(i<0){
        return 0;
     }

if(dp[i]!=-1){
    return dp[i];
}
     int include=nums[i]+robSolveUsingMemo(nums,i-2,dp);
     int exclude =robSolveUsingMemo(nums,i-1,dp);
     dp[i]=max(include,exclude);
     return dp[i];

    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+1,-1);
        return robSolveUsingMemo(nums,nums.size()-1,dp);
    }
};
