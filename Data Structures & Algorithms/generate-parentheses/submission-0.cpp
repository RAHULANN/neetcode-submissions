class Solution {
public:
    vector<string> generateParenthesis(int n) {
        
        vector<string> st;
        vector<string> ans;
    int start=0;
        int end=0;
        validate(start,end,st,ans,n);
        return ans;
      
    
    }

     void validate(int start,int end, vector<string>&st, vector<string>&ans,int n){
            if(start==end&&start==n){
                string s="";
                for(int i=0;i<st.size();i++){
                cout<<st[i];
                s=s+st[i];

                }
                ans.push_back(s);
                return;
            }
            if(start<n){
                st.push_back("(");
                validate(start+1,end,st,ans,n);
                st.pop_back();
            }
            if(end<start){
                st.push_back(")");
                validate(start,end+1,st,ans,n);
                st.pop_back();
            }
        };
};
