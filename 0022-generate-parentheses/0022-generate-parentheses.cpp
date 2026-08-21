class Solution {
public:
    vector<string> generateParenthesis(int n) {
        if (n == 0) {
        return {""};
        }
        vector<string>result;
        for(int i=0;i<n;i++){
        vector<string> l=generateParenthesis(i);
        vector<string> r=generateParenthesis(n-i-1);
        for (int j = 0; j < l.size(); j++) {
        for (int k = 0; k < r.size(); k++) {
        result.push_back("(" + l[j] + ")" + r[k]);
             }
            }
        }
        return result;
    }
};