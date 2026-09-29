class Solution {
    /**
     * @param {string} s
     * @return {boolean}
     */
    isValid(s) {

        const arr=[]

const obj={
    "}":"{",
    "]":"[",
    ")":"("
}
        for(let i=0;i<s.length;i++){

// console.log(arr,obj[s[i]],s[i])
if(!obj[s[i]]){
    arr.push(s[i])
}else if(arr[arr.length-1]==obj[s[i]]){
arr.pop()
}else{
    return false
}
console.log(arr)
        }

        if(arr.length>0){
            return false
        }
        return true
    }
}
