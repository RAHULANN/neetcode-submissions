class Solution {
    /**
     * @param {string} s
     * @return {number}
     */
    lengthOfLongestSubstring(s) {

        let l=0;
        let r=1
        let max=0

if(!s.length){
    return 0
}
let obj={[s[0]]:true}
        while(r<s.length){

console.log(obj)
if(s[l]==s[r]){
    l=r
    r=r+1
}else if(!obj[s[r]]){
obj[s[r]]=true
r++
}else{
max=Math.max(max,Object.keys(obj).length)
l=r
r++
obj={[s[l]]:true}
}
        }
max=Math.max(max,Object.keys(obj).length)

        return max
    }
}
