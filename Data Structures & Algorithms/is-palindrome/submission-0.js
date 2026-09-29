class Solution {
    /**
     * @param {string} s
     * @return {boolean}
     */
    isPalindrome(s) {

const obj={a:"a",b:"b",c:1,d:1,e:1,f:1,g:1,h:1,i:1,j:1,k:1,l:1,m:1,n:1,o:1,p:1,q:1,r:1,s:1,t:1,u:1,v:1,w:1,x:1,y:1,z:1,"0":1,"1":1,"2,":1,"3":3,"4":4,"5":5,"6":6,"7":2,"8":"1","9":2}
   
        let trimedstr= s.toLocaleLowerCase().trim().split(" ").join("")

let st=""
for(let i=0;i<trimedstr.length;i++){
    if(obj[trimedstr[i]]){
       st=st+trimedstr[i]
    }
}
console.log(st)
for(let i=0;i<st.length;i++){
    if(st[i]!=st[st.length-1-i]){
        return false
    }
}
return true
   
       
    }
}
