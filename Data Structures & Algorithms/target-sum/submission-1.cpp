class Solution {
public:
 int totalSum;
    int findTheSum(vector<int>& nums, int target,int i,vector<vector<int>> &dp){
        if(i==nums.size()&&target==0){
            return 1;
        }
        if(i>=nums.size()){
            return 0;
        }
         if (abs(target) > totalSum) {
            return 0;
        }
        if(dp[totalSum+target][i]!=-1){
            return dp[totalSum+target][i];
        }
        return dp[totalSum+target][i]= findTheSum(nums,target-nums[i],i+1,dp)+findTheSum(nums,target+nums[i],i+1,dp);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
         totalSum = accumulate(nums.begin(), nums.end(), 0);
        vector<vector<int>> dp(2*totalSum+1,vector<int>(nums.size()+1,-1));
        return findTheSum(nums,target,0,dp);
    }
};
