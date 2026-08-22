class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int mul=1;
        int copy=n;
        while(n!=0){
            sum+=n%10;
            mul*=n%10;
            n/=10;
        }
        return copy%(sum+mul)==0;
    }
};