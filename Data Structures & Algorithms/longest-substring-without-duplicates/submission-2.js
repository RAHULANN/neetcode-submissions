class Solution {
    /**
     * @param {string} s
     * @return {number}
     */
    lengthOfLongestSubstring(s) {
        let max=0
        let l=0
        const obj={}
        for(let i=0;i<s.length;i++){
             while(obj[s[i]]){
        
           delete obj[s[l]]
           l++
             }  
             obj[s[i]]=true
             max =Math.max(max,i-l+1)  
          
        }
        return max
    }
}
