class Solution {
    /**
     * @param {number[]} heights
     * @return {number}
     */
    maxArea(heights) {
        let max=0

let l=0
let r=heights.length
        while(l<r){
            const curr=(r-l) * Math.min(heights[l], heights[r])
            if(curr>max){
                max=curr
            }
            if(heights[l]<heights[r]){
                l++
            }else{
r--
            }
        }
        return max
    }
}
