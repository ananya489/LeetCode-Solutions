class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
       int n=arr.size();
       sort(arr.begin(),arr.end());
       vector<vector<int>>ans;
       int mindiff=INT_MAX;
       for(int i=1 ;i<n;i++){
        int diff=arr[i]-arr[i-1];
        if(diff<mindiff){
            mindiff=diff;
            ans.clear();
            ans.push_back({arr[i-1],arr[i]});
        }else if(diff==mindiff){
            ans.push_back({arr[i-1],arr[i]});
        }
       }
       return ans; 
    }
};