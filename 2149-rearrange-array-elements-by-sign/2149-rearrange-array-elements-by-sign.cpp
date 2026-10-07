class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
    vector<int> pos;
    vector<int> neg;
    int n=nums.size();
    for(int x : nums) {
    if(x > 0)
        pos.push_back(x);
    else if(x < 0)
        neg.push_back(x);
    }
    for(int i=0;i<n/2;i++){
        nums[2*i]=pos[i];
        nums[2*i+1]=neg[i];
    }
    return nums;
    }
};