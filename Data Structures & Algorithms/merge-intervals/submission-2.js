class Solution {
    /**
     * @param {number[][]} intervals
     * @return {number[][]}
     */
    merge(intervals) {

        const arr=[]

        const test=intervals.sort((a,b)=>a[0]-b[0])
        console.log(test)
        for(let i=0;i<intervals.length;i++){

            if(arr.length&&arr[arr.length-1][1]>=intervals[i][0]){
                arr[arr.length-1][1]=Math.max(arr[arr.length-1][1],intervals[i][1])
            }else{
                arr.push(intervals[i])
            }
        }

console.log(arr)
        return arr
    }
}
