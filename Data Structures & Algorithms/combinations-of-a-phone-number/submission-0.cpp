class Solution {
public:
  vector<string> digitToChar = {"", "", "abc", "def", "ghi", "jkl",
                                  "mno", "qprs", "tuv", "wxyz"};
    vector<string> letterCombinations(string digits) {
          vector<string> res;
  
 if(digits.empty()){
        
        return res;
    }
    stringRes(0,"",digits,res);
   
    return res;
    }
 void stringRes(int i,string str,string&digits,vector<string>& res){

    if(i==digits.size()){
        res.push_back(str);
        return;
    }
    string digiStr=digitToChar[digits[i]-'0'];
    for(char c:digiStr){
       stringRes(i+1,str+c,digits,res);
    }
 }
};
