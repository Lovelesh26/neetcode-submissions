class Solution {
public:
    vector<int>anagramVector(string &s){
         vector<int>arr(26);
         for(int i=0;i<s.size();i++){
            arr[s[i]-'a']++;
         }
     return arr;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        map<vector<int>,vector<string>>mp;
        for(int i=0;i<n;i++){
            vector<int>arr(26);
            arr = anagramVector(strs[i]);
            mp[arr].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        // for(auto it = mp.begin();it!=mp.end();it++){
        //    ans.push_back(it.second);
        // }
        for (auto &it : mp) {
            ans.push_back(it.second);
        }
        return ans;
    }
};
