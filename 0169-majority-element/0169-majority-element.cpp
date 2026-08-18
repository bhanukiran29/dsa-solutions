class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int l=nums.size();
        int el=0;
        int c=0;

        for(int n : nums){
            if(c==0){
                c=1;
                el=n;
            }
            else if(n==el){
                c++;
            }
            else{
                c--;
            }
        }
        return el;
    }
};