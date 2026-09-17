class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int maxlen=0;
        int l=0,r=0;
        unordered_map<int,int>map;
        while(r<n){
            map[fruits[r]]++;
            while(map.size()>2){
               map[fruits[l]]--;
                if(map[fruits[l]]==0)
                map.erase(fruits[l]);
                l++;
            }
            if(map.size()<=2){
                maxlen=max(maxlen,r-l+1);
                r++;
            }
        }
        return maxlen;
    }
};