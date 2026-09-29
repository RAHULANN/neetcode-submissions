class Solution {
    /**
     * @param {number[]} height
     * @return {number}
     */
    trap(height) {

let maxLeft=height[0]
let maxRight=height[height.length-1]
let l=0
let r=height.length-1
let sum=0
while(l<r){
if(height[l]<=height[r]){

    maxLeft=Math.max(maxLeft,height[l])
    sum=sum+maxLeft-height[l]
    l++
}else{
    maxRight=Math.max(maxRight,height[r])
    sum=sum+maxRight-height[r]
    r--
}

}

return sum
    }
}
