/**
 * Definition of Interval:
 * class Interval {
 *   constructor(start, end) {
 *     this.start = start;
 *     this.end = end;
 *   }
 * }
 */

class Solution {
    /**
     * @param {Interval[]} intervals
     * @returns {boolean}
     */
    canAttendMeetings(intervals) {

       const so=intervals.map((ele)=>[ele.start,ele.end]).sort((a,b)=>a[0]-b[0])

       for(let i=1;i<so.length;i++){

if(so[i-1][0]==so[i][0]||so[i-1][1]>so[i][1]||so[i-1][1]>so[i][0]){
    return false
}
       }

       return true
    }
}
