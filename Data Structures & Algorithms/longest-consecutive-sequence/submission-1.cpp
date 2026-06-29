class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        int res = 0;
        for(int i=0;i<nums.size();i++){

            if(st.find(nums[i]-1)==st.end()){
               int len = 1;
               int element = nums[i]+1;
               while(st.find(element)!=st.end()){
                   len++;
                   element++;
               }
               res = max(res, len);
            }
        }
    return res;
    }
};
