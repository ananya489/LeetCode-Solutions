class Solution {
public:
vector<vector<int>>dp;
    bool checkValidString(string s) {
        int n=s.size();
        dp.assign(n,vector<int>(n+1,-1));
        return solve(0,0,s);
    }
    bool solve(int index,int opencount,string &s){
    if(opencount<0){
        return false;
    }
    if(index==s.length()){
        return opencount==0;
    }
    if (dp[index][opencount] != -1)
            return dp[index][opencount];
    bool ans;
    if(s[index]=='('){
        ans=solve(index+1,opencount+1,s);
    }
    else if(s[index]==')'){
        ans=solve(index+1,opencount-1,s);
    }
     else{
        ans=solve(index + 1, opencount + 1, s) || 
               solve(index + 1, opencount - 1, s) || 
               solve(index + 1, opencount, s);
    }
    return dp[index][opencount] = ans;
    }
};