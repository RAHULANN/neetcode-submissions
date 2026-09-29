class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
      vector<vector<int>> ans;
      vector<int> cur;
        sumSolve(ans,nums,target,cur,0);

        return ans;
    }

   void sumSolve(vector<vector<int>>& ans,vector<int>& nums, int target,vector<int>& cur,int i) {

    if(target==0){
        ans.push_back(cur);
return;
    }
    if(target<0||i>=nums.size()){
        return;
    }
cur.push_back(nums[i]);
sumSolve(ans,nums,target-nums[i],cur,i);
cur.pop_back();
sumSolve(ans,nums,target,cur,i+1);




   }
};
