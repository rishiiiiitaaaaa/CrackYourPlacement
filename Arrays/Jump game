class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxindx=0;
        for(int i=0;i<nums.size();i++){
            if(i>maxindx)return false;
            maxindx=max(maxindx,i+nums[i]);
        }
        return true;
    }
};
