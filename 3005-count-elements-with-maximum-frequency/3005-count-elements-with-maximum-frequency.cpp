class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int total=0;
        int maxFreq=0;

        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;            
        }

        for(auto it:mpp){
            int freq=it.second;
            maxFreq=max(maxFreq,freq);
        }

        for(auto it: mpp){
            if(it.second==maxFreq){
                total+=maxFreq;
            }
        }

        return total;
    }
};