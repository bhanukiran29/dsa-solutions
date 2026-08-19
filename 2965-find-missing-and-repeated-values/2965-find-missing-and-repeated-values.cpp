class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int N = n * n;

        int xr = 0;

        // XOR all grid elements
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                xr ^= grid[i][j];
            }
        }

        // XOR numbers from 1 to N
        for(int i = 1; i <= N; i++) {
            xr ^= i;
        }

        // Rightmost set bit
        int number = xr & ~(xr - 1);

        int zero = 0;
        int one = 0;

        // Group grid elements
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] & number)
                    one ^= grid[i][j];
                else
                    zero ^= grid[i][j];
            }
        }

        // Group numbers from 1 to N
        for(int i = 1; i <= N; i++) {
            if(i & number)
                one ^= i;
            else
                zero ^= i;
        }

        // Find which one is repeated
        int cnt = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == zero)
                    cnt++;
            }
        }

        if(cnt == 2)
            return {zero, one};

        return {one, zero};
    }
};