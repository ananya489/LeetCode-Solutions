class Solution {
public:int cost(int a, int b) {
        int diff = abs(a - b);
        return min(diff, 10 - diff);
    }
    int minRotations(int n, string s) {
        int total = cost(0, s[0] - '0');

        for (int i = 1; i < n; i++) {
            total += cost(s[i - 1] - '0', s[i] - '0');
        }
        int ans=total;
        int newTotal = total
                     - cost(0, s[0] - '0')
                     + cost(0, s[n - 1] - '0');

        ans = min(ans, newTotal);
        for (int k = 1; k < n; k++) {

            newTotal = total
                     - cost(s[k - 1] - '0', s[k] - '0')
                     + cost(s[k - 1] - '0', s[n - 1] - '0');

            ans = min(ans, newTotal);
        }

        return ans;
    }
};