class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans=arr;
        sort(ans.begin(),ans.end());
        int r=1;
        map<int, int> rank;
        for(int x : ans) {
            if(rank.find(x) == rank.end()) {
                rank[x] = r;
                r++;
            }
        }
        for(int i = 0; i < arr.size(); i++) {
            arr[i] = rank[arr[i]];
        }

        return arr;
    }
};