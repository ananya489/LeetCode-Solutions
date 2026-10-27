class Solution {
public:
int lower_bound(vector<int>&arr,int n,int x){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>=x){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int cnt_max=0;
        int idx=0;
        for(int i=0;i<n;i++){
            int cnt_ones = 0;

            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 1) {
                    cnt_ones++;
                }
            }
            if(cnt_ones>cnt_max){
                cnt_max=cnt_ones;
                idx=i;
            }
        }
        return {idx,cnt_max};
    }
};