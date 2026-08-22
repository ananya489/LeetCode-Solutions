class Solution {
public:
    bool checkDivisibility(int n) {
        int original=n;
        int s=0;
        int p=1;
        while(n>0){
            int digit=n%10;
            s+=digit;
            p*=digit;
            n/=10;
        }
        int divisor=s+p;
        return original % divisor == 0;
    }
};