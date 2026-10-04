class Solution {
public:
    int findLongestSubS(string text1,string text2,int i,int j,vector<vector<int>> &dp){

        if(i==text1.length()||j==text2.length()){
           return 0;
        }

        int res=0;
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(text1[i]==text2[j]){
            res=1+findLongestSubS(text1,text2,i+1,j+1,dp);
        }else{
            int incl=findLongestSubS(text1,text2,i+1,j,dp);
            int notin=findLongestSubS(text1,text2,i,j+1,dp);

            res=max(incl,notin);
        }
        return dp[i][j]=res;

    }
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.length()>text2.length()?text1.length():text2.length();
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        return findLongestSubS(text1,text2,0,0,dp);
    }
};
