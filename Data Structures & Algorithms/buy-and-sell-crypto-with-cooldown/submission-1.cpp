class Solution {
public:
    int maxOfBuySell(vector<int>& prices,int i,int type,int profit,vector<vector<int>>&dp){
        if(i==prices.size()){
            return 0;
        }
         if(i>prices.size()){
            return 0;
        }
    
    if(dp[i][type]!=-1){
        return dp[i][type];
    }

        if(type==1){
           int ans= maxOfBuySell(prices,i+1,2,profit,dp)-prices[i];
            int ans1 = maxOfBuySell(prices,i+1,1,profit,dp);
            dp[i][type]= max(ans,ans1);
        }else{
          int ans= maxOfBuySell(prices,i+2,1,profit,dp)+prices[i];
    int ans1= maxOfBuySell(prices,i+1,2,profit,dp);
    dp[i][type]= max(ans,ans1);
        }
            return dp[i][type];
  
    }
    int maxProfit(vector<int>& prices) {
            if(prices.size()==1){
            return 0;
        }
        
        vector<vector<int> > dp(prices.size()+1,vector<int>(prices.size()+1,-1));

        return maxOfBuySell(prices,0,1,0,dp);
    }
};
