class Solution {
public:
   int solveUsingMemo(vector<int>& nums,int i,int j,bool flag,vector<int>&dp){
    
    if(i>=j){
        return 0;
    }
if(dp[i]!=-1){
    return dp[i];
}
    int include =nums[i]+solveUsingMemo(nums,i+2,j,true,dp);
    int exclude=solveUsingMemo(nums,i+1,j,true,dp);
dp[i]=max(include,exclude);
      
    return dp[i];

   }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+1,-1);
        vector<int> dd(nums.size()+1,-1);

if(nums.size()==1){
return nums[0];
}
        int ans= solveUsingMemo(nums,0,nums.size()-1,false,dp);
        int anss= solveUsingMemo(nums,1,nums.size(),false,dd);

        // cout<<"n"<<dp[nums.size()];

        // cout<<"n-1"<<dp[nums.size()-1];
        // cout<<"n-2"<< dp[nums.size()-2];
        // cout<<"n-4"<< dp[nums.size()-3];

      return max(ans,anss);
    }
};
