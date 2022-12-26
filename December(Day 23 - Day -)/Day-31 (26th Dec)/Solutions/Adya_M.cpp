class Solution {
public:
   void solve(string digits,string op, int index,vector<string>& ans,string alp[]){
       if(index>=digits.length()){
        ans.push_back(op);
        return;
       }
//to find the mapping of the characters of the character "23" 2 will be reqiired as an int
       int num=digits[index]-'0';
//num is 2 then val will be "abc";
       string val=alp[num-2];

       for(int i=0;i<val.length();i++)
       {
           op.push_back(val[i]);
           solve(digits,op,index+1,ans,alp);
           op.pop_back();//Bcktracking
       }
   }
    vector<string> letterCombinations(string digits) {
        string alp[8]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string op="";
        vector<string> ans;
    //if the length of the input is empty then return empty string.
        if(digits.length()==0)
        return ans;
        int index=0;
    solve(digits,op,index,ans,alp);
     return ans;
    }
};