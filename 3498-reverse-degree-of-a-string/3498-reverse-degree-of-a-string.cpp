class Solution {
public:
    int reverseDegree(string s) {
        int total_sum=0;
        for(int i=0;i<s.length();i++){
            int pos=i+1;
            int rev=26-(s[i]-'a');
            total_sum+=pos*rev;
        }
        return total_sum;
    }
};