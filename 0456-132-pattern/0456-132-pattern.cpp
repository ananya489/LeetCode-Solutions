class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n=nums.size();
        int t=INT_MIN;
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            if(nums[i]<t){
                return true;
            }
            while(!st.empty() && nums[i] > st.top()) {
                t = st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
    }
};