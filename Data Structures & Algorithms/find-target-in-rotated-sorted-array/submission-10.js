class Solution {
    /**
     * @param {number[]} nums
     * @param {number} target
     * @return {number}
     */
    search(nums, target) {
        let start=0
        let end=nums.length-1

        while(start<=end){
            const mid=Math.floor((start+end)/2)
            if(nums[mid]==target){
                return mid
            }

            if(nums[start]<=nums[mid]){
                if(nums[mid]<target||target<nums[start]){
                    start=mid+1
                }else{
                    end=mid-1
                }
            }else{

                if(nums[mid]>target||target>nums[end]){
                    end=mid-1
                }else{
                    start=mid+1
                }
            }
        }

        return -1
    }
}
