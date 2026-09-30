class Solution {
public:
    int coinCh(vector<int>& coins, int amount,vector<int>&dp){

        if(amount==0){
            return 0;
        }
        
       
        int ans=1000;
        if(dp[amount]!=-1){
            return dp[amount];
        }
        for(int i=0;i<coins.size();i++){
            // ans=min(coinCh(coins,amount-coins[i]),coinCh(coins,amount));
            if(amount-coins[i]>=0){
           ans=min(ans,1+coinCh(coins,amount-coins[i],dp));

            }
         
        }
        //   int incl=1+coinCh(coins,amount-coins[i],i+1);
        //     int dl=1+coinCh(coins,amount-coins[i],i);
dp[amount]=ans;
        return dp[amount];
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1,-1);
        int m= coinCh(coins,amount,dp);
        return (m==1000)?-1:m;
    }
};
