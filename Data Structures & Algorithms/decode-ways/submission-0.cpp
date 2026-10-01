class Solution {
public:
    int solveUsingMem(string s,int i,vector<int>& dp){

        if(s[i]=='0'){
            return 0;
        }
        if(i==s.size()){
            return 1;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int res=solveUsingMem(s,i+1,dp);

        if(i+1<s.length()&&(s[i]=='1'|| (s[i]=='2'&& s[i+1]<'7'))){
        //      if(s[i]=='1'|| (s[i]=='2'&& s[i+1]<'7')){
        //     res=res+solveUsingMem(s,i+2,dp);
        // }
            res=res+solveUsingMem(s,i+2,dp);

        }
        // if(i+1<s.length()&&(s[i]=="1"||s[i]=="2"&&s[i+1]<"7")){
        //     res=res+solveUsingMem(s,i+2,dp);
        // }
dp[i]=res;
        return dp[i];
    }
    int numDecodings(string s) {
        vector<int> dp(s.length()+1,-1);
       return solveUsingMem(s,0,dp);
        
    }
};
