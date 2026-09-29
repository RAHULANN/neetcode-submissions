class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int top=0;
        int bot=col-1;

        while(top<row&&bot>=0){

      
            if(target<matrix[top][bot]){
                bot--;
            }else if(target>matrix[top][bot]){
                top++;
            }else{
               return true;
            }
        }
        return false;
    }
};
