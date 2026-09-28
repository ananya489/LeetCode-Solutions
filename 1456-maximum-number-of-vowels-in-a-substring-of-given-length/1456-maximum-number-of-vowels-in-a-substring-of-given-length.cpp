class Solution {
public:
    int maxVowels(string s, int k) {
        set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        int count=0;
        for (int i = 0; i < k; i++) {
            if (vowels.count(s[i])) {
                count++;
            }
        }
        int maxc=count;
        for(int i=k;i<s.size();i++){
            if(vowels.count(s[i])){
                count++;
            }
            if(vowels.count(s[i-k])){
                count--;
            }
            maxc=max(maxc,count);
        }

        return maxc;
    }
};