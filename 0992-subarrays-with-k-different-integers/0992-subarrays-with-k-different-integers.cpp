class Solution {
public:
int atMost(const vector<int>& nums, int k) {
        vector<int> frequency(nums.size() + 1);
        int left = 0;
        int distinct = 0, count = 0;
        for (int right = 0; right < nums.size(); ++right) 
        {
            if (frequency[nums[right]]++ == 0) 
            distinct++;
            while (distinct > k) {
                if (--frequency[nums[left++]] == 0) 
                distinct--;
            }
            count += right - left + 1;
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums,k)-atMost(nums,k-1);
    }
};