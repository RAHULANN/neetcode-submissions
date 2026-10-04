class Solution {
public:
    int coinChange(int amount, vector<int>& coins,int i, vector<vector <int> > &dp){

        if(amount==0){
            return 1;
        }
        if(amount<0){
            return 0;
        }
        if(i>=coins.size()){
            return 0;
        }
int res=0;
if(dp[i][amount]!=-1){
    return dp[i][amount];
}
        if(amount>=coins[i]){
          int incl=  coinChange(amount-coins[i],coins,i,dp);
            int excl= coinChange(amount,coins,i+1,dp);


        res=res+incl+excl;
        dp[i][amount]=res;
     
        }
        return res;
    }
    int change(int amount, vector<int>& coins) {
        sort(coins.begin(),coins.end());
        vector<vector <int> > dp(amount+1,vector<int>(amount+1,-1));
       return coinChange(amount,coins,0,dp);
    }
};
