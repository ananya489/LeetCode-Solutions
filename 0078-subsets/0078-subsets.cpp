class Solution {
public:
void solve(int n,vector<int>&nums,vector<vector<int>>&res,vector<int>&ans){
    if(n==nums.size()){
       res.push_back(ans);
        return;
    }
    ans.push_back(nums[n]);
    solve(n+1,nums,res,ans);
    ans.pop_back();
    solve(n+1,nums,res,ans);

}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ans;
        vector<vector<int>>res;
        solve(0,nums,res,ans);
        return res;
    }
};
