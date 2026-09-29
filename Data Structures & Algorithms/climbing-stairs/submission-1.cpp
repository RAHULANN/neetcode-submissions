class Solution {
public:

    int solveUsingMemo(int n,vector<int> &dp){

        if(n==0){
            return 1;
        }
        if(n<0){
            return 0;
        }

if(dp[n]!=-1){
    return dp[n];
}
        int ans=solveUsingMemo(n-1,dp)+solveUsingMemo(n-2,dp);
        dp[n]=ans;
        return dp[n];
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return solveUsingMemo(n,dp);
    }
};
