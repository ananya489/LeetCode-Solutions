class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> rounds;
        map<int, int> count;
        for (int num : nums) {
        int instance = count[num];
        count[num]++;
        if (instance >= rounds.size()) {
            rounds.push_back({});
        }
        rounds[instance].push_back(num);
    }
    vector<int> ans;
    for (const auto& round : rounds) {
        for (int num : round) {
            ans.push_back(num);
        }
    }

    return ans;
    }
};