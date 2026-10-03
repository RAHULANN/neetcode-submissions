class Solution {
public:

   bool dfsMethod(vector<int>&nums,int sum,int i,vector<vector<int>>&dp){

 if(i==nums.size()){
    return sum ==0;
 }
 if(sum<0){
    return false;
 }
if(dp[i][sum]!=-1){
    return dp[i][sum];
}
dp[i][sum]= dfsMethod(nums,sum,i+1,dp)||dfsMethod(nums,sum-nums[i],i+1,dp);
return dp[i][sum];
   }
    bool canPartition(vector<int>& nums) {
        int sum =0;
        for(int num:nums){
            sum+=num;
        }

        if(sum%2!=0){
            return false;
        }
         
        vector<vector<int>> dp(nums.size()+1,vector<int>(sum,-1)); 

        return dfsMethod(nums,sum/2,0,dp);
    }
};
