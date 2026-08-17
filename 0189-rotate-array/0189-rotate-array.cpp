class Solution {
private:
    void rotateArray(vector<int>&nums,int start,int end){
        while(start<end){
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
       
    }

public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
        rotateArray(nums,0,n-k-1);
        rotateArray(nums,n-k,n-1);
        rotateArray(nums,0,n-1);
    }
};