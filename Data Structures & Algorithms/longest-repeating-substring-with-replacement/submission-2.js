class Solution {
    /**
     * @param {string} s
     * @param {number} k
     * @return {number}
     */
    characterReplacement(s, k) {
        let res=0
        let l=0
        const obj={}
        let max=0
        for(let r=0;r<s.length;r++){
            obj[s[r]]=1+( obj[s[r]]||0) 
            if(max<obj[s[r]]){
                max=obj[s[r]]
            }
            while(r-l+1-max>k){
              obj[s[l]]= obj[s[l]]-1
              l++
            }
            res=Math.max(res,r-l+1)
        }
        return res

    }
}
