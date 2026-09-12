class Solution {
public:
    vector<vector<int>> ans;
    void dp(int idx,vector<int> &ls,vector<int>& nums){
        if(idx==nums.size()){
            ans.push_back(ls);
            return;
        }
        ls.push_back(nums[idx]);
        dp(idx+1,ls,nums);
        ls.pop_back();
        dp(idx+1,ls,nums);
    }   
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ls;
        dp(0,ls,nums);
        return ans;
    }
};