class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int i=0;
        int j=0;
        while(i<nums1.size()&&j<nums2.size()){
            if(nums1[i]>nums2[j]){
                ans.push_back(nums2[j]);
                j++;
            }else if(nums1[i]<nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }else{
                i++;
            }
        }
     if(i<nums1.size()){
        for(int k=i;k<nums1.size();k++){
            ans.push_back(nums1[k]);
        }
     }
      if(j<nums2.size()){
        for(int k=j;k<nums2.size();k++){
            ans.push_back(nums2[k]);
        }
     }

     int len=ans.size();
       int mid= (0+len)/2;
     if(len%2==0){
      double m=mid;
        double an=(ans[m-1]+ans[m])/2.0 ;

        return an;
     }else{
        return ans[mid];
     }
        
    }
};
