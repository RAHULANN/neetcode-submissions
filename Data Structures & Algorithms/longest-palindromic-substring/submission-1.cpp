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

cout<<"st " <<st <<endl;
        }

cout<<"st" << st <<endl;
        cout<<"start " << rs[1]<< endl;
        cout<<"len " << rs[0]<< endl;

        string ans="";
        for(int j=rs[1];j<rs[0]+rs[1];j++){
            ans=ans+s[j];
        }
        cout<<"ans " <<ans<<endl;
        return ans;


    }
  void subst(string s,int i,int j,vector<int>& tem){
        int res=0;
        while(i>=0&&j<s.length()&&s[i]==s[j]){
            res++;
            i--;
            j++;
        }
       
        
    //   cout <<"res " <<tem[0]<<endl;
      int sum=j-1-(i+1);
       tem[0]=sum+1;
      tem[1]=sum>0?i+1:0;
      cout<<"sum "<<sum <<endl;
    //   cout <<"i,j " <<i <<" j "<<j <<endl;
    }
    string longestPalindrome(string s) {
        return longPS(s);
        
    }
};
