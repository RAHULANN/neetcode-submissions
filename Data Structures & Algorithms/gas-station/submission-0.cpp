class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        if(sumVal(gas)<sumVal(cost)){
            return -1;
        }
        int res=0;
        int total=0;

        for(int i=0;i<gas.size();i++){
            total=total+(gas[i]-cost[i]);
            if(total<0){
total=0;
res=i+1;

            }
        }

        return res;
    }

    int sumVal(vector<int> arr){
        int ans=0;
        for(int i=0;i<arr.size();i++){
            ans=ans+arr[i];
        }
        return ans;
    }
};
