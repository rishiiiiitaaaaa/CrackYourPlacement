class Solution {
public:
    int maxProduct(vector<int>& nums) {
        __int128_t pre = 1;
        __int128_t suff = 1;
        __int128_t ans = INT_MIN;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(pre==0) pre =1;
            if(suff==0) suff =1;
            pre*= nums[i];
            suff*= nums[n-i-1];
            ans = max(ans, max(pre,suff));
        }
        return (int) ans;
    }
};
