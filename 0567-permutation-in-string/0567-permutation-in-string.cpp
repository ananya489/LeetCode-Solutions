class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l=s1.length();
        int m=s2.length();
        if(l>m)
        return false;
        string t=s1;
        sort(t.begin(),t.end());
        for(int i=0;i<=m-l;i++){
            string c_window = s2.substr(i, l);
            sort(c_window.begin(),c_window.end());
            if(c_window==t){
                return true;
            }
        }
        return false;
    }
};