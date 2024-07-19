class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        int l = INT_MIN, r =0 ;;
        for(auto i : nums){
            l = max(l, i);
            r += i;
        }

        while(l <= r){
            int mid = l + (r - l) / 2;

            int cnt = 1, sum = 0;
            for(int i=0; i<n; i++){
                sum += nums[i];
                if(sum > mid){
                    cnt++;
                    sum = nums[i];
                }
            }

            if(cnt <= k)
                r = mid - 1;
            else
                l = mid + 1;
        }

        return l;
    }
};
