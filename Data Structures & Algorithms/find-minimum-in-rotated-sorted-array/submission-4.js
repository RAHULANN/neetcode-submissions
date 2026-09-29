class Solution {
    /**
     * @param {number[]} nums
     * @return {number}
     */
    findMin(nums) {

        let start=0
        let end=nums.length-1
        let min=100000
        
          if(nums.length==1){
            return nums[0]
        }
     
        while(start<=end){

            const mid=Math.floor((start+end)/2)

console.log(start,end,mid)
if(nums[mid]<min){
    min=nums[mid]

}

if(nums[end]>nums[start]){
    end--
}else{
    start++
}
        }
console.log(min)
        return min
    }

}
