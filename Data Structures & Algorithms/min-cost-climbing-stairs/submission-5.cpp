class Solution {
public:
    int solveUsingTab(vector<int>& cost){
        vector<int> dp(cost.size()+1,0);
dp[0]=cost[0];
dp[1]=cost[1];
        for(int i=2;i<cost.size();i++){
             dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
        }
        cout << "dp[n]"<< dp[cost.size()-2];
        cout << "dp[n-1]"<< dp[cost.size()-1];

        return min(dp[cost.size()-2],dp[cost.size()-1]);

    }
    int minCostClimbingStairs(vector<int>& cost) {
        return solveUsingTab(cost);
    }
};
