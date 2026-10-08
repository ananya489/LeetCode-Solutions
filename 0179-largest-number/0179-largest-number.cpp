class Solution {
public:
static bool compareNumStrings(const string& a, const string& b) {
    return (a + b) > (b + a); 
}
    string largestNumber(vector<int>& nums) {
        vector<string>ans;
        for(int x:nums){
            ans.push_back(to_string(x));
        }
        sort(ans.begin(),ans.end(),compareNumStrings);
        if(ans[0]=="0"){
            return "0";
        }
        string result;
        for(const string& str:ans){
            result+=str;
        }
        return result;
    }
};