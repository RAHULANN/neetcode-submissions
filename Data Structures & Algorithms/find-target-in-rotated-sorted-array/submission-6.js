class Solution {
    /**
     * @param {number[]} nums
     * @param {number} target
     * @return {number}
     */
    search(nums, target) {
        let start=0
        let end=nums.length-1

        let ans=""

        while(start<end){

            const mid=Math.floor((start+end)/2)
if(nums[mid]>nums[end]){
    start=mid+1
}else end=mid

           
        } 


        console.log(start)

        let lefta=0
        let ra=start-1
        if(target>=nums[0]&&target<=nums[start-1]){
            lefta=0
            ra=start-1
        }else{
            lefta=start
            ra=nums.length-1
        }

        if(nums[0]<nums[nums.length-1]){
    lefta=0
     ra=nums.length-1
}

        while(lefta<=ra){
            const mid=Math.floor((lefta+ra)/2)

            if(nums[mid]==target){
                return mid
            }else if(nums[mid]>target){
                ra=mid-1
            }else lefta=mid+1
        }
        return -1
    }
}
