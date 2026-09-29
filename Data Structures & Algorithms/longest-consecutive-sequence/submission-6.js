class Solution {
    /**
     * @param {number[]} nums
     * @return {number}
     */
    longestConsecutive(nums) {

        const setObj=new Set(nums)
        let longest=0

        for( let num of setObj){

            if(!setObj.has(num-1)){
                let length=1
                while(setObj.has(num+length)){
                    length++
                }
                longest =Math.max(longest,length)
            }
        }

        return longest 
    }
}
