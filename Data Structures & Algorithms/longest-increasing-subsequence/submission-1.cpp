class Solution {
public:
    int lss(vector<int>&nums,int i,int j,vector<vector <int> >&dp){

        if(i==nums.size()){
            return 0;
        }

   
        if(dp[i][j+1]!=-1){
return dp[i][j+1];
        }
             int ans=lss(nums,i+1,j,dp);
        if(j==-1||nums[j]<nums[i]){
            ans =max(ans,1+lss(nums,i+1,i,dp));
        }
    
dp[i][j+1]=ans;
        return dp[i][j+1];

    }
    int lengthOfLIS(vector<int>& nums) {
int n=nums.size();
        vector<vector <int> > dp(n+1,vector<int>(n+1,-1));
        return lss(nums,0,-1,dp);
    }
};
