class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int x : nums){
            if(x%2==0) freq[x]++;
        }

        int maxFreq=0,ans=-1;
        for(auto it : freq){
            if(it.second>maxFreq || it.second==maxFreq && it.first<ans){
                maxFreq=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};