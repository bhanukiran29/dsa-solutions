class Solution {
public:
    int myAtoi(string s) {
        int i=0,n=s.size();
        while(i<n && s[i]==' ') i++; //space

        int sign=1; //sign
        if(i<n && s[i]=='-'){
            sign=-1;
            i++;
        } else if(i<n && s[i]=='+') i++;

        //parse digits and calculate result
        long long result=0;
        while(i<n && isdigit(s[i])){
            result= result*10 + (s[i]-'0');
            i++;

            if(result*sign>=INT_MAX) return INT_MAX; //check for overflow

            if(result*sign<=INT_MIN) return INT_MIN;

        }
        return result*sign;
    }
};