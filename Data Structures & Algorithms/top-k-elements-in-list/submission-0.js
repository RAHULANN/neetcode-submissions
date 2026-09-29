class Solution {
    /**
     * @param {number[]} nums
     * @param {number} k
     * @return {number[]}
     */
    topKFrequent(nums, k) {

        const obj={}
        for(let i=0;i< nums.length;i++){

      
         

            if(obj[nums[i]]?.num.toString()){
                obj[nums[i]]= {index:i,val:obj[nums[i]]?.val+1,num:nums[i]}
            }else{
                obj[nums[i]]= {index:i,val:1,num:nums[i]}

            }
        }

const temparr=Object.values(obj).map((el)=>el).sort((a,b)=>b.val-a.val)


const ans=[]
for(let j=0;j<k;j++){
    ans.push(temparr[j].num)
}
return ans
        console.log(temparr,obj)
    }
}
