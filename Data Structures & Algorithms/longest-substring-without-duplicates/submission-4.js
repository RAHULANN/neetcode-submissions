class Solution {
    /**
     * @param {string} s
     * @return {number}
     */
    lengthOfLongestSubstring(s) {

      let obj={}
      let l=0
      let max=0
      for(let i=0;i<s.length;i++){

        while(obj[s[i]]){
          delete obj[s[l]]
          l++
        }

        obj[s[i]]=true
        max=Math.max(max,i-l+1)
      }

      return max
    }
}
