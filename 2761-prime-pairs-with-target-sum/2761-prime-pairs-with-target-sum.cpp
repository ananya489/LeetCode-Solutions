class Solution {
public:
bool isprime(int n){
    if(n<=1){
        return false;
    }
    if(n==2){
        return true;
    }
    if(n%2==0){
        return false;
    }
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
    vector<vector<int>> findPrimePairs(int n) {
        vector<vector<int>>result;
        for(int i=2;i<=n/2;i++){
            if(isprime(i)){
                int y=n-i;
                if(isprime(y)){
                    result.push_back({i,y});
                }
            }
        }
        return result;
    }
};