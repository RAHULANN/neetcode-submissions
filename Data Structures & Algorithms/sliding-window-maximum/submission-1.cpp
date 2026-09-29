class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       

vector<int> ans;
int start=0;
int end=k;
maxInTheWindow(start,end,nums,ans);
return ans;

        
    }

  void maxInTheWindow(int& start,int& end,vector<int>&nums,vector<int>&ans){
     int maxInstart=-40000;
      
      if(end>nums.size()){
        return;
      }
  for(int i=start;i<end;i++){
if(maxInstart<nums[i]){
    maxInstart=nums[i];
}
     


  }
ans.push_back(maxInstart);
int nes=start+1;
int nexe=end+1;
maxInTheWindow(nes,nexe,nums,ans);
        
   }
};
