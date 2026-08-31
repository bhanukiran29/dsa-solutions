class Solution {
public:
    string removeOuterParentheses(string s) {
        int balance=0;
        string res="";
        for(char c : s){
            if(c=='('){
                if(balance>0)
                    res+=c;
                balance++;
            }
            else{
                balance--;
                if(balance>0)
                    res+=c;
            }
            
        }
        return res;
    }
};