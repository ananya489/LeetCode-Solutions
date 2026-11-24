class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int left = 0, ans = 2;

        for(int right = 0; right < n; right++) {

            while(true) {
                bool valid = true;

                for(int k = left; k < right; k++) {
                    if(gcd(nums[k], nums[right]) != 1) {
                        valid = false;
                        break;
                    }
                }

                if(valid) break;

                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};