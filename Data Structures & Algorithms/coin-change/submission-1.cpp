class Solution {
public:
    
    int solveUsingTab(vector<int>& coins, int amount){

        vector<int> dp(amount+1,0);



    for(int j=1;j<=amount;j++){
        int ans=10000;
for(int i=0;i<coins.size();i++){
 if(j-coins[i]>=0){
           ans=min(ans,1+dp[j-coins[i]]);

            }
    }
  
    dp[j]=ans;
          cout <<"j " << j << " " <<dp[j]<< endl;
            
        }
        if(dp[amount]==10000){
            return -1;
        }
        return dp[amount];
    }
    int coinChange(vector<int>& coins, int amount) {
        return solveUsingTab(coins,amount);
    }
};
