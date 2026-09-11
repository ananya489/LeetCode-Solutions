class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            int digitc=0;
            while(num>0){
                digitc++;
                num/=10;
            }
            if(digitc%2==0){
                c++;
            }
        }
        return c;
    }
};