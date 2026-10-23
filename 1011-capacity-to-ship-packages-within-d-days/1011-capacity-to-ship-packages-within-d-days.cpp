class Solution {
public:
int func(vector<int>&nums,int c){
    int day=1;
    int load=0;
    for(int i=0;i<nums.size();i++){
        if(load+nums[i]>c){
            day=day+1;
            load=nums[i];
        }
        else{
            load+=nums[i];
        }
    }
    return day;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int low=*max_element(weights.begin(),weights.end());
        int high=0;
        for(int i=0;i<n;i++){
            high+=weights[i];
        }
        // int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(func(weights,mid)<=days){
                // ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};