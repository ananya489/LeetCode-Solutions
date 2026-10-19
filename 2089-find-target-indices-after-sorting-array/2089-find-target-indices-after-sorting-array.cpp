class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0;
        int h=n-1;
        sort(nums.begin(), nums.end());
        vector<int>ans;
        while(l<=h){
            int m=l+(h-l)/2;
            if(nums[m]==target){
                ans.push_back(m);
                int i = m - 1;
                while(i >= 0 && nums[i] == target) {
                    ans.push_back(i);
                    i--;
                }

                i = m + 1;
                while(i < n && nums[i] == target) {
                    ans.push_back(i);
                    i++;
                }

                sort(ans.begin(), ans.end());
                return ans;
            }
            else if(nums[m]<target){
                l=m+1;
            }
            else{
                h=m-1;
            }
        }
        return ans;
    }
};