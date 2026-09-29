class Solution {
    /**
     * @param {number[]} nums
     * @return {number[]}
     */
    productExceptSelf(nums) {

const obj={}

let ans=[]
let sum=1

let count=0
for(let i=0;i<nums.length;i++){

if(nums[i]==0){
    count++
    obj["1"]=i
}else{
    sum =sum*nums[i]
}

}
if(count>=2){
   ans=Array(nums.length).fill(0)
   return ans
}
if(count==1){
   ans=Array(nums.length).fill(0)
   ans[obj["1"]] =sum
   return  ans
}
for(let i=0;i<nums.length;i++){
ans.push(sum/nums[i])
}
return ans


    }
}
