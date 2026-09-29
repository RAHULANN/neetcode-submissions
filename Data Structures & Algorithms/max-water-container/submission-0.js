class Solution {
    /**
     * @param {number[]} heights
     * @return {number}
     */
    maxArea(heights) {

        let max=0

        for(let i=0;i<heights.length;i++){

            for(let j=i+1;j<heights.length;j++){
                
                const curr=Math.min(heights[i],heights[j])*(j-i)


                // console.log(curr,Math.min(heights[i],heights[j]),heights[i],heights[j])
                if(curr>max){
                    max=curr
                }
            }
        }
        return max
    }
}
