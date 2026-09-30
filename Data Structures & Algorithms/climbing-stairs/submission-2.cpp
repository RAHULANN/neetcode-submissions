class Solution {
public:
    int solveusingTab(int n){
        vector<int> dp(n+1,0);
        
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            int ans=dp[i-1]+dp[i-2];
        dp[i]=ans;
        }

        return dp[n];
    }
    int climbStairs(int n) {
        return solveusingTab(n);
    }
};
