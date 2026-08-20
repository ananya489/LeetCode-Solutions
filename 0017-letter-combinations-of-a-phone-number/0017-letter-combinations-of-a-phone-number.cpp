class Solution {
public:
    vector<string> ans;
    string mp[10] = {
        "", "", "abc", "def", "ghi",
        "jkl", "mno", "pqrs", "tuv", "wxyz"
    };
    void solve(string &digits, int index, int letterIndex, string &temp) {       
        if (index == digits.size()) {
            ans.push_back(temp);
            return;
        }
        string &letters = mp[digits[index] - '0'];        
        if (letterIndex == letters.size()) {
            return;
        }
        temp.push_back(letters[letterIndex]);
        solve(digits, index + 1, 0, temp);
        temp.pop_back();
        solve(digits, index, letterIndex + 1, temp);
    }

    vector<string> letterCombinations(string digits) {

        if (digits.empty())
            return {};

        string temp;

        solve(digits, 0, 0, temp);

        return ans;
    }
};