class Solution {
private:
    static bool comparator(pair<char,int>a,pair<char,int>b){
        return a.second>b.second;
    }

public:
    string frequencySort(string s) {
        int freq[128]={0};
        for(char ch : s){
            freq[ch]++;
        }

        vector<pair<char,int>> v;
        for(int i=0;i<128;i++){
            if(freq[i]>0){
                v.push_back({i,freq[i]});
            }
        }

        sort(v.begin(),v.end(),comparator);

        string ans;
        for(auto p : v){
            ans.append(p.second,p.first);
        }

        return ans;
    }
};