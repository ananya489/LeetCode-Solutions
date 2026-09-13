class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        vector<vector<int>>ans(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int oldCol=(j+ rowShift[i]) % n;
                int newRow= (i- colShift[j] + n ) % n;
                ans[newRow][j]=grid[i][oldCol];
            }
        }
        return ans;
    }
};