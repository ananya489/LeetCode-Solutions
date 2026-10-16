class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        int c=0;
        sort(citations.begin(),citations.end());
        for(int i=0;i<n;i++){
            if(citations[i]>=n-i){
                    c=n-i;
                    break;
            }
        }
        return c;
    }
};