class Solution {
public:
void solve(int i,int j,vector<int>&nums,vector<vector<int>>&ans){
    if(i==nums.size()){
        ans.push_back(nums);
        return ;
    }
    if(j==nums.size())
    return ;
        swap(nums[i],nums[j]);
        solve(i+1,i+1,nums,ans);
        swap(nums[i],nums[j]);
        solve(i,j+1,nums,ans);
    
}
    vector<vector<int>> permute(vector<int>& nums) {
       int n=nums.size();
       vector<vector<int>>ans;
       solve(0,0,nums,ans);
       return ans;
    }
};