class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int s=0;
        int c=0;
        for(int i=0;i<k;i++){
            s+=arr[i];
        }
        if(s>=k*threshold){
            c++;
        }
        int maxsum=s;
        for(int i=k;i<n;i++){
            s+=arr[i];
            s-=arr[i-k];
            maxsum=max(maxsum,s);
            if(s>=k*threshold){
                c++;
            }
        }
        return c;
    }
};
