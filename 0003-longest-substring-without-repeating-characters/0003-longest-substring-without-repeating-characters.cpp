class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int n=s.length();
    int maxlen=0;
    for(int i=0;i<n;i++){
        int hash[256]={};
       for(int j=i;j<n;j++){
        int index = static_cast<unsigned char>(s[j]); 
        if(hash[index]==1)
        break;
        int len=j-i+1;
    maxlen=max(len,maxlen);
    hash[index]=1;
       }
    }
    return maxlen;
    }
};