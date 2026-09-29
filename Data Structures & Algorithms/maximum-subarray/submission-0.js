class Solution {
    /**
     * @param {number[]} nums
     * @return {number}
     */
    maxSubArray(nums) {
        let curr=0
        let maxSum=nums[0]

        for(let i=0;i<nums.length;i++){
            if(curr<0){
                curr=0
            }
            curr=curr+nums[i]

            maxSum=Math.max(maxSum,curr)
        }

        return maxSum
    }
}
