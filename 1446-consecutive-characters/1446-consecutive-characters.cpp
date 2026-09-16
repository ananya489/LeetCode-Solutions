class Solution {
public:
    int maxPower(string s) {
        int n=s.length();
        int c=1;
        int mc=1;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                c++;
            }
            else{
                c=1;
            }
            mc=max(mc,c);
        }
        return mc;
    }
};