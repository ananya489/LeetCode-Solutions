class Solution {
public:
bool ispossible(vector<int>&arr,int day,int m,int k){
    int c=0;
    int noofbou=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]<=day){
            c++;
        }
        else{
            noofbou+=(c/k);
            c=0;
        }
    }
    noofbou+=(c/k);
    if(noofbou>=m)
    return true;
    return false;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low=INT_MAX;
        int high=INT_MIN;
        int n=bloomDay.size();
        for(int i=0;i<n;i++){
            low=min(low,bloomDay[i]);
            high=max(high,bloomDay[i]);
        }
        if(n<(long long)m*k)
        return -1;
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(ispossible(bloomDay,mid,m,k)){
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