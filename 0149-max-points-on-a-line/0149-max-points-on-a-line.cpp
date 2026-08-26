class Solution {
private:
    struct PairHash{
        size_t operator()(const pair<int,int> &p) const{
            return hash<int>()(p.first)^hash<int>()(p.second);
        }
    };

public:
    int maxPoints(vector<vector<int>>& points) {
        int n =points.size();

        if (n <= 2)
            return n;

        int ans=0;

        for(int i=0;i<n;i++){
            unordered_map<pair<int,int>,int,PairHash> mpp;
            int maxCnt=0;
            for(int j=i+1;j<n;j++){
                int dy = points[j][1]-points[i][1];
                int dx = points[j][0]-points[i][0];
                
                if(dx==0){ //vertical line
                    dy=1;
                }

                else{
                    int g = gcd(abs(dy),abs(dx));
                    dy=dy/g;
                    dx=dx/g;

                    if(dx<0){
                        dx=-dx;
                        dy=-dy;
                    }
                }
                pair<int,int> slope= {dy,dx};
                mpp[slope]++;
                maxCnt=max(maxCnt,mpp[slope]);

            }
            //+1 for anchor point itself
            ans= max(ans,maxCnt+1);
        }
        return ans;
        
    }
};