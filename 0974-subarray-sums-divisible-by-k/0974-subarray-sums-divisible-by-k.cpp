class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int cnt=0;
        int sum=0;
        unordered_map<int,int> mpp; //<remainder,cnt>
        int remainder=0;
        mpp[remainder]=1;

        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            remainder=((sum%k)+k)%k;
            cnt+=mpp[remainder];
            mpp[remainder]++;
        }
        return cnt;
    }
};