class Solution {
public:
    int reverse(int x) {
        int rev=0;
        while(x!=0){
            int l=x%10;
            x=x/10;
            rev=rev*10+l;
        }
        return rev;
    }
};