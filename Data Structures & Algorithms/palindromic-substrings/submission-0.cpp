class Solution {
public:
    int substring(string s){
        int res=0;
        for(int i=0;i<s.length();i++){
            res=res+checkSubString(s,i,i);
            res=res+checkSubString(s,i,i+1);
        }
        return res;
    }
    int checkSubString(string s,int i,int j){
      int res=0;
      while(i>=0&&j<s.length()&&s[i]==s[j]){
        res=res+1;
        i--;
        j++;
      }
      return res;
    }
    int countSubstrings(string s) {
        return substring(s);
    }
};
