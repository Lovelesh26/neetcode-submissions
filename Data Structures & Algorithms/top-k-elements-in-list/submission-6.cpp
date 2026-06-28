class Solution {
public:
   // TC : O(nlogk)
    // vector<int> topKFrequent(vector<int>& nums, int k) {
    //     priority_queue<pair<int,int>>pq;

    //     unordered_map<int,int>mp;
    //     for(int i=0;i<nums.size();i++){
    //         mp[nums[i]]++;
    //     }
    //     for(const auto &[key,value] : mp){
    //         pq.push({-1*value,key});
    //         if(pq.size()>k) pq.pop();
    //     }
    //     vector<int>ans;
    //     while(!pq.empty()){
    //         ans.push_back(pq.top().second);
    //         pq.pop();
    //     }
    // return ans;
    // }

 // TC : O(n)
 vector<int> topKFrequent(vector<int>& nums, int k){
        unordered_map<int,int>mp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
    
        vector<vector<int>> bucket(n + 1);
        for(const auto &[key,value] : mp){
            bucket[value].push_back(key);
        }
        vector<int>ans;
        for(int freq=n;freq>=0 && k>0;freq--){
           for(int num : bucket[freq]){
               ans.push_back(num);
               k--;
           }
          
        }
    return ans;
 }

};
