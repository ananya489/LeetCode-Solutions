class Solution {
public:
    long long func(vector<int>arr,int h){
        int n=arr.size();
        long long totalh=0;
        for(int i=0;i<n;i++){
            totalh+=ceil(double(arr[i])/h);
        }
        return totalh;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1;
        int ans=INT_MAX;
        int high=INT_MIN;
        for(int i=0;i<n;i++){
            high=max(piles[i],high);
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            long long totalh=func(piles,mid);
            if(totalh<=h){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};