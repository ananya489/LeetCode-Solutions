class Solution {
public:
int sumofdivisor(vector<int>&nums,int d){
    int s=0;
    for(int i=0;i<nums.size();i++){
        s+=ceil((double)nums[i]/d);
    }
    return s;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
       if(n>threshold)
       return -1;
       int low=1;
       int high=*max_element(nums.begin(),nums.end());
       int ans=-1;
       while(low<=high){
        int mid=low+(high-low)/2;
        if(sumofdivisor(nums,mid)<=threshold){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
       }
       return ans; 
    }
};