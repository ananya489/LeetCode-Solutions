class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
     unordered_map<int,int>mp;
    //  prefix sum we initiased zero
     mp[0]=1;
    int s=0,ans=0;
    for(int x:nums){
        s+= x;
            if (mp.count(s-k)) {
                ans+= mp[s-k];
            }

            mp[s]++;
        }
        return ans;
    }
};