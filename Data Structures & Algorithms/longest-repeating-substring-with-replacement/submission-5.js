class Solution {
    /**
     * @param {string} s
     * @param {number} k
     * @return {number}
     */
    characterReplacement(s, k) {

        let obj={}
        let l=0
        let max=0
        let res=0  
        for(let i=0;i<s.length;i++){
            obj[s[i]]=1+(obj[s[i]]||0)
            if(max<obj[s[i]]){
                max=obj[s[i]]
            }

            while(i-l+1-max>k){
                obj[s[l]]=obj[s[l]]-1
                l++
            }
            res=Math.max(res,i-l+1)


        }

        return res
    }
}
