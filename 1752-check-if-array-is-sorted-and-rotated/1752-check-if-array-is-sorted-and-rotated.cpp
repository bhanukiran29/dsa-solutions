class Solution {
public:
    bool check(vector<int>& nums) {
        int  n  =nums.size();
        int vc=0; //violation count
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]) vc++;
        }
        if(nums[n-1]>nums[0]) vc++;
        return vc>1 ? false : true ;
    }
};