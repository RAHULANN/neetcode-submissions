class Solution {
    /**
     * @param {number[]} nums
     * @param {number} target
     * @return {number[]}
     */
    twoSum(nums, target) {

        const obj={}

        for(let i=0;i<nums.length;i++){
            const dif=target-nums[i]
            if(obj[dif.toString()]){
             
                return [obj[dif.toString()],i]
            }else{
                obj[nums[i].toString()]=i
            }
              
        }
        const dif=target-nums[0]
            if(obj[dif.toString()]){
             
                return [obj[dif.toString()],0]
            }

    }
}
