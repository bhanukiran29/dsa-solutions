class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if(n<=2) return n;
        int c1=0,c2=0,c3=0;

        int minIdx=0,maxIdx=0;
        int maxEl=INT_MIN,minEl=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]>maxEl){
                maxEl=nums[i];
                maxIdx=i;
            }
            if(nums[i]<minEl){
                minEl=nums[i];
                minIdx=i;
            }
        }

        //remove both from front
        c1=max(minIdx,maxIdx)+1;

        //remove both from back
        c2=n-min(minIdx,maxIdx);

        //remove one from front and one from back
        c3=(min(minIdx,maxIdx)+1)+(n-max(minIdx,maxIdx));

        return min({c1,c2,c3});
    }
};