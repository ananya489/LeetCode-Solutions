class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l=s1.length();
        int m=s2.length();
        if(l>m)
        return false;
        vector<int>s1count(26,0);
        vector<int>window(26,0);
        for (int i = 0; i < l; i++) {
        s1count[s1[i] - 'a']++;
        window[s2[i] - 'a']++;
    }
     if (s1count == window) {
        return true;
    }
    for (int i = l; i < m; i++) {
        char enteringChar = s2[i];          
        char leavingChar = s2[i - l];  
        window[enteringChar - 'a']++; 
        window[leavingChar - 'a']--;   
        if (s1count == window) {
            return true; 
        }
    }
    return false;
    }
};