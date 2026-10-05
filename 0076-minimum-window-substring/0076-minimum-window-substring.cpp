class Solution {
public:
    string minWindow(string s, string t) {
        int freq[256]={0};
        int req=t.size();
        for(char c:t){
            freq[c]++;
        }
        int l=0;
        int start=0;
        int minlen=INT_MAX;
        for(int r=0;r<s.size();r++){
            if(freq[s[r]]>0){
                req--;
            }
            freq[s[r]]--;
            while(req==0){
                if(r-l+1<minlen){
                    minlen=r-l+1;
                    start=l;
                }
                freq[s[l]]++;
                if(freq[s[l]]>0){
                    req++;
                }
                l++;
            }
        }
        if(minlen==INT_MAX)
        return "";
        return s.substr(start, minlen);
    
    }
};