class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        int i =0;
        sort(nums.begin(),nums.end());
        while(nums[i] != nums[i+1])
        {
            i++;
        }
        return nums[i];
    }
};
