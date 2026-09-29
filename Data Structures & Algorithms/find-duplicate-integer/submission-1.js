class Solution {
    /**
     * @param {number[]} nums
     * @return {number}
     */
    findDuplicate(nums) {

        const obj={}

        for(let i=0;i<nums.length;i++){
            obj[nums[i]]=obj[nums[i]]?obj[nums[i]]+1:1
            if(obj[nums[i]]>1){
                return nums[i]
            }
        }
    }
}
