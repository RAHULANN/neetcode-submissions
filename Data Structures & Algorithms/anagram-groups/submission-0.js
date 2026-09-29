class Solution {
    /**
     * @param {string[]} strs
     * @return {string[][]}
     */
    groupAnagrams(strs) {

const obj={}
        for(let i=0;i<strs.length;i++){
            const arr=Array(26).fill(0)

            for(let j=0;j<strs[i].length;j++){
                const currChar= strs[i][j].charCodeAt(0)-'a'.charCodeAt(0)
           
         arr[currChar] +=1;
            }

            const key =arr.join(",")

            if(!obj[key]){
                obj[key]=[]
            }
             obj[key].push(strs[i])
        }
             return Object.values(obj);
    }
}
