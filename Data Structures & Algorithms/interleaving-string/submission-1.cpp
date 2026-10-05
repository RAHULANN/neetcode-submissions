class Solution {
public:
    bool findTheSubstr(string s1, string s2, string s3,int i,int j,int k,vector<vector<vector <int>>>&dp){
       
//         if(k==s3.length()){
// return true;
//         }       

       if(dp[i][j][k]!=-1){
        return dp[i][j][k];
       }
        if(k>=s3.length()){
            return (i==s1.length())&&(j>=s2.length());
        }
        //  if((i>=s1.length()&&j>=s2.length())&&k<s3.length()-1){
        //     return false;
        // }

        if(i<s1.length()&&s1[i]==s3[k]){
           if( findTheSubstr(s1,s2,s3,i+1,j,k+1,dp)){
            dp[i][j][k]=true;
            return true;
           }
        }
        if(j<s2.length()&&s2[j]==s3[k]){
           if (findTheSubstr(s1,s2,s3,i,j+1,k+1,dp)){
            dp[i][j][k]=true;
            return true;
           }
        }
        //  if(s2[j]!=s3[k]&&s1[i]!=s3[k]){
        //    return 
        // }
        dp[i][j][k]=false;
return false;
        // return findTheSubstr(s1,s2,s3,i+1,j+1,k);

    }
    bool isInterleave(string s1, string s2, string s3) {
        vector<vector<vector <int>>> dp(s1.length()+1,vector<vector<int>>(s2.length()+1,vector<int>(s3.length()+1,-1)));
        return findTheSubstr(s1,s2,s3,0,0,0,dp);
    }
};
