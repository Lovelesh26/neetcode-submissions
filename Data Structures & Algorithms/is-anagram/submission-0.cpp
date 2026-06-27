class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>arr(256);
        if(t.size() != s.size()) return false;
        for(int i=0;i<s.size();i++){
            arr[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            arr[t[i]-'a']--;
        }
        for(int i=0;i<256;i++){
            if(arr[i]!=0) return false;
        }
    return true;
    }
};
