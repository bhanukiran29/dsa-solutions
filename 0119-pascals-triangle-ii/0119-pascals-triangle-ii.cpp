class Solution {
public:
    vector<int> getRow(int rowIndex) {
        rowIndex=rowIndex+1;
        long long ans=1;
        vector<int>ansRow;
        ansRow.push_back(ans);

        for(int col=1;col<rowIndex;col++){
            ans=ans*(rowIndex-col);
            ans=ans/col;
            ansRow.push_back(ans);
        }
        return ansRow;
    }
};