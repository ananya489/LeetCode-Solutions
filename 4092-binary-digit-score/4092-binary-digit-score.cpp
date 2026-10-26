class Solution {
public:
    int countbits(int n){
        int c=0;
        while(n>0){
            n=n&(n-1);
            c++;
        }
        return c;
    }
    int calculateScore(int a, int b) {
        int s1=countbits(a);
        int s2=countbits(b);
        int ans;
        if(s1>=s2){
            ans=s1*s2;
        }
        else{
            ans=s2/s1;
        }
        return ans;
    }
};