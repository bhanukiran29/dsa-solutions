class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int l=nums.size();
        int posIndex=0;
        int negIndex=1;
        vector<int> ans(l,0);

        for(int i=0;i<l;i++){
            if(nums[i]<0){
                ans[negIndex]=nums[i];
                negIndex+=2;
            }
            else{
                ans[posIndex]=nums[i];
                posIndex+=2;
            }
        }
        return ans;
    }
};