class Solution {
public:
    bool solveUsingTopDown(string s,string p, int i,int j,vector <vector <int> >&dp){
        
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(i>=s.length()&&j>=p.length()){
            return true;
        }
        if(j>=p.length()){
            return false;
        }

        bool isFirstMatch=i<s.length()&&(s[i]==p[j]||p[j]=='.');

        if(j+1<p.length()&&p[j+1]=='*'){
            return dp[i][j]= solveUsingTopDown(s,p,i,j+2,dp)||(isFirstMatch&&solveUsingTopDown(s,p,i+1,j,dp));
        }else
        if(isFirstMatch){
           return dp[i][j]=solveUsingTopDown(s,p,i+1,j+1,dp);
        }
        return dp[i][j]=false;
    }
    bool isMatch(string s, string p) {
        vector <vector <int> > dp(s.length()+1,vector<int>(p.length()+1,-1));
        return solveUsingTopDown(s,p,0,0,dp);
    }
};
