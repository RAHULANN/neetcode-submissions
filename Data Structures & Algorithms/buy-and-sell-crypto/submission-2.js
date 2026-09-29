class Solution {
    /**
     * @param {number[]} prices
     * @return {number}
     */
    maxProfit(prices) {

        let max=0
        let l=0;
        let r=1

        while(r<prices.length){
            if(prices[r]>prices[l]){
              max=Math.max(max,(prices[r]-prices[l]))
   
           
            } else{
                l=r
            }
            r=r+1
            console.log(max,l,r)

   
          
        }
        return max
    }
}
