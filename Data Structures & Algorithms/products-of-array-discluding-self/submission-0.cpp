class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     int n = nums.size();
     int pf = 1;
     int pb = 1;
     vector<int>arr1(n,1),arr2(n,1);
     for(int i=0;i<n;i++){
        pf = pf*nums[i];
        arr1[i] = pf;

        pb = pb*nums[n-1-i];
        arr2[n-1-i] = pb;
     }

     vector<int>ans(n);
     ans[0] = arr2[1];
     ans[n-1] = arr1[n-2];
     for(int i=1;i<nums.size()-1;i++){
         ans[i] = pf - (nums[i]-1)*arr1[i-1]*arr2[i+1];
     }

     return ans;
    }
};
