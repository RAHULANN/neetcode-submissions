class Solution {
public:
    int solveUsingTab(vector<int>& nums){
        vector<int> dp(nums.size()+2,0);
        if(nums.size()==1){
            return nums[0];
        }

dp[0]=nums[0];
        for(int i=1;i<nums.size();i++){
             int include=nums[i];
             if(i-2>=0)
             {include=include+dp[i-2];}
     int exclude =dp[i-1];
     dp[i]=max(include,exclude);
 
        }
            return dp[nums.size()-1];
    }
    int rob(vector<int>& nums) {
        return solveUsingTab(nums);
    }
};
