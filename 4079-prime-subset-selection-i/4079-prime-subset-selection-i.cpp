class Solution {
public:
    vector<int> maxPrimes(int n, int s) {
        vector<bool>isprime(n+1,true);
        isprime[0]=false;
        if(n>=1)
        isprime[1]=false;
        for(int i=2;i*i<=n;i++){
            if(isprime[i]){
                for(int j=i*i;j<=n;j+=i){
                    isprime[j]=false;
                }
            }
        }
        vector<int>ans;
        long long sum=0;
        for(int i=2;i<=n;i++){
            if(isprime[i] && sum+i<=s){
                ans.push_back(i);
                sum+=i;
            }
        }
        return ans;
    }
};