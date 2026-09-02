class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        vector<vector<int>>ans;
        int total=1<<n;
        for(int mask=0;mask<total;mask++){
            vector<int>subset;
            for(int i=0;i<n;i++){
            if(mask&(1<<i)){
                subset.push_back(nums[i]);
            }
            }
            ans.push_back(subset);
        }
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }
};