class Solution {
public:
    int longestValidParentheses(string s) {
        int maxlen=0;
        int open=0;
        int close=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            char ch=s[i];
            if(ch== '('){
                open++;
            }
            else if(ch==')'){
                close++;
            }
            if(open==close){
                maxlen=max(maxlen,2*close);
            }
            if(close>open){
                open=close=0;
            }
        }
        open=close=0;
            for(int i=n-1;i>=0;i--){
                char ch=s[i];
            if(ch=='('){
                open++;
            }
            else if(ch==')'){
                close++;
            }
            if(open==close){
                maxlen=max(maxlen,2*open);
            }
            if(close<open){
                open=close=0;
            }
        }
        return maxlen;
    }
};