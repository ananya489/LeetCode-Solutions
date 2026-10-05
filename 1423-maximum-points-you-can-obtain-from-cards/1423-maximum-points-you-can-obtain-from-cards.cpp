class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int mins=0;
        int n=cardPoints.size();
        for(int i=0;i<n-k;i++){
                mins+=cardPoints[i];
        }

        int s=0;
        for(int i=0;i<n;i++){
            s+=cardPoints[i];
        }
        int minsum=mins;
        for (int i = n - k; i < n; i++) {
            mins += cardPoints[i];
            mins -= cardPoints[i - (n - k)];

            minsum = min(minsum, mins);
        }
        int maxsum=s-minsum;
        return maxsum;
    }
};