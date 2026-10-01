class Solution {
public:
    string longPS(string s){
        int st=0;
          vector<int> rs(2,0);
        for(int i=0;i<s.length();i++){
            vector<int> tem(2,0);
               subst(s,i,i,tem);
               if(st<tem[0]){
                st=tem[0];
                rs[0]=tem[0];
                rs[1]=tem[1];
               }
               tem[0]=0;
               tem[1]=0;

                subst(s,i,i+1,tem);
               if(st<tem[0]){
                st=tem[0];
                rs[0]=tem[0];
                rs[1]=tem[1];
               }
               tem[0]=0;
               tem[1]=0;


        }


        string ans="";
        for(int j=rs[1];j<rs[0]+rs[1];j++){
            ans=ans+s[j];
        }
    
        return ans;


    }
  void subst(string s,int i,int j,vector<int>& tem){
        int res=0;
        while(i>=0&&j<s.length()&&s[i]==s[j]){
            res++;
            i--;
            j++;
        }
       
        

      int sum=j-1-(i+1);
       tem[0]=sum+1;
      tem[1]=sum>0?i+1:0;
   
    }
    string longestPalindrome(string s) {
        return longPS(s);
        
    }
};
