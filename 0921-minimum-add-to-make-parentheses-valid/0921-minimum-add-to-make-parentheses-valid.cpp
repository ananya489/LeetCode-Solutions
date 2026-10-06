class Solution {
public:
    int minAddToMakeValid(string s) {
        int balance=0;
        int unmatched=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                balance++;
            }
            else if(s[i]==')'){
                balance--;
            }
            if(balance<0){
                unmatched++;
                balance=0;
            }
        }
        return unmatched+balance;
    }
};