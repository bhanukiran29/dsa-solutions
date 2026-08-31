class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
       std::reverse(s.begin(),s.end());
       int i=0,j=0,start=0,end=0;
       while(j<n){
        while(j<n && s[j]==' ') j++;
        if(j==n) break;

        start =i;
        while(j<n && s[j]!=' '){
            s[i++]=s[j++];
        }
        end=i-1;
        std::reverse(s.begin()+start,s.begin()+end+1);
        
        if(j<n){
            s[i++]=' ';
        }        

       }
       if(i>0 && s[i-1]==' ') i--;
       return s.substr(0,i);
    }
};