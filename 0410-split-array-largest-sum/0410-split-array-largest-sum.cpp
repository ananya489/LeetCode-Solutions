class Solution {
public:
bool possible(vector<int>&nums,int n,int k,int maxs){
    int c = 1;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        if(sum + nums[i] > maxs) {
            c+=1;
            sum = nums[i];
        }
        else {
            sum += nums[i];
        }
    }
    if(c>k)
    return false;
    else
    return true;
}
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int l=INT_MIN;
        int h=0;
        int ans=-1;
        for(int i=0;i<n;i++){
            l=max(l,nums[i]);
            h+=nums[i];
        }
        while(l<=h){
            int mid=l+(h-l)/2;
            if(possible(nums,n,k,mid)){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};