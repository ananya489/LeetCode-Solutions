class Solution {
public:
    int minBitFlips(int start, int goal) {
        int n=start^goal;
        int flip=0;
        while(n>0){
            // n=n&(n-1);
            // flip++;
            if((n&1)==1){
                flip++;
            }
            n=n>>1;
        }
        return flip;
    }
};