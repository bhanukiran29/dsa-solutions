class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c1=0,max1=0;
        for(auto it : nums){
            if(it==1){
                c1++;
                max1=max(max1,c1);
            }
            else c1=0;
        }
        return max1;
    }
};