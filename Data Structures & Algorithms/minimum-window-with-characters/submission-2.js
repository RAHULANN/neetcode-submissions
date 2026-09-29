class Solution {
    /**
     * @param {string} s
     * @param {string} t
     * @return {string}
     */
    minWindow(s, t) {
        const lan1=s.length
        const len2=t.length
        if(lan1<len2){
            return ""
        }

        let ansInd=0
        let ansCount=10000

        const smap={}
        const tmap={}
let need=0
        for(let i=0;i<t.length;i++){
            tmap[t[i]]=(tmap[t[i]]||0)+1
need++
        }


        let have=0
let l=0
        for(let i=0;i<s.length;i++){

smap[s[i]]=(smap[s[i]]||0)+1

console.log(smap,tmap[s[i]])
if(tmap[s[i]]&&smap[s[i]]<=tmap[s[i]]){
    have++
}

console.log(need,have)
while(need==have){

    if((i-l+1)<ansCount){
        ansCount=i-l+1
        ansInd=l
    }
    smap[s[l]]=smap[s[l]]-1
    if(tmap[s[l]]&&(tmap[s[l]]>smap[s[l]])){
have--
    }
    l++
}
        }

        console.log(ansInd,ansCount)
        if(ansCount==10000){
            return ""
        }else{
            let re=""
            for(let i=ansInd;i<ansInd+ansCount;i++){
                re=re+s[i]
            }
            console.log(re)
            return re
        }

    }
}
