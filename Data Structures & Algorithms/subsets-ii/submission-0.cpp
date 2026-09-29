class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
          vector<int> cur ={};
          vector<vector<int>> ans;
          int i=0;
        solve(nums,ans,cur,i);
        return ans;

    }

    void solve(vector<int>&nums,vector<vector<int>>&ans,vector<int>cur,int i){

        if(i==nums.size()){
            ans.push_back(cur);
            return;
        }
        if(i>=nums.size()){
            return;
        }
        cur.push_back(nums[i]);
        solve(nums,ans,cur,i+1);
        while(i<nums.size()&&nums[i]==cur[cur.size()-1]){
            i=i+1;
        }
        cur.pop_back();
        solve(nums,ans,cur,i);
    }
};
