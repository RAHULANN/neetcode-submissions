class Solution {
    /**
     * @param {number[]} nums
     * @return {number}
     */
    longestConsecutive(nums) {


const obj={}

for(let i=0;i<nums.length;i++){
   obj[nums[i]]=true
}
        const sortted=Object.keys(obj).sort((a,b)=>a-b)

        let count=0
        console.log(sortted)
        if(sortted.length==1){
            return 1
        }
        let lastv=0
        for(let i=0;i<sortted.length-1;i++){

// console.log(i,sortted[i+1]-sortted[i])
if(sortted[i+1]-sortted[i]==1){
 

   count=count+1
   if(lastv<count){
    lastv=count
}
}else{

if(lastv<count){
    lastv=count
}
count=0
}
        }

if(lastv>=1){
return lastv+1
}
        return 0
    }
}
