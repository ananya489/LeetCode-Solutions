class Solution {
public:
int lowerBound(vector<int> &nums, int x){
        int n=nums.size();
        int ans=n;
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>=x){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    int upperBound(vector<int> &nums, int x){
        int n=nums.size();
        int ans=n;
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>x){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int first=lowerBound(nums,target);
        if(first==n || nums[first]!=target){
            return {-1,-1};
        }
        int last=upperBound(nums,target)-1;
        return {first,last};
    }
};