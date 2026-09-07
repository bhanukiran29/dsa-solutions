class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n=nums.size();
        int ans=0,i=0,j=n/2;
        long long s1=0,s2=0;
        
        while(i < n/2){
            s1+=nums[i];
            i++;
        }
        while(j< n){
            s2+=nums[j];
            j++;
        }

        i=0;j=n/2;
        while(i<n && j<n){
            if(s1>s2) ans++;
            s1=s1-nums[i]+nums[j]; 
            s2=s2-nums[j]+nums[i];
            i++;j=(j+1)%n;
            
            
        }
        

        return ans;
    }
};