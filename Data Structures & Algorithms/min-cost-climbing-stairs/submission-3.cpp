class Solution {
public:

    int solveUsingMemo(vector<int>& cost,vector<int>& dp,int i){

        
        if(i>=cost.size()){
            return 0;
        }

if(dp[i]!=-1){
    return dp[i];
}
        dp[i]=cost[i]+min(solveUsingMemo(cost,dp,i+1),solveUsingMemo(cost,dp,i+2));
        return dp[i];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n+3,-1);
        int ans=solveUsingMemo(cost,dp,0);
        cout<< "dp" <<dp[0];
        cout<< "dp" <<dp[1];


        return min(dp[0],dp[1]);
        // return ans;
    }
};
