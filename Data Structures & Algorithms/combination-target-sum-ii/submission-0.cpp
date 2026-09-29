class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> cur;
        vector<vector<int>> ans;
            sort(candidates.begin(), candidates.end());
        vector<int> nums=candidates;
        
        int i=0;
        sumList(ans,nums,cur,target,i);
return vector<vector<int>>(ans.begin(), ans.end());
    }

    void sumList(vector<vector<int>>&ans,vector<int>& nums,vector<int>& cur,int target,int i){
  if(target==0){
    ans.push_back(cur);
    return;
  } 
  if(target<0||i>=nums.size()){
    return ;
  }


cur.push_back(nums[i]);
int tr=target-nums[i];
sumList(ans,nums,cur,tr,i+1);
cur.pop_back();
  while (i + 1 < nums.size() && nums[i] == nums[i + 1]) {
            i++;
        }
sumList(ans,nums,cur,target,i+1);
    }
};
