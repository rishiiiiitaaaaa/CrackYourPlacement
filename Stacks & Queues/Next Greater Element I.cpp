class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        stack<int> st;
        
        // Traverse nums2 from right to left
        for(int i = nums2.size() - 1; i >= 0; i--) {
            // Maintain stack of elements greater than nums2[i]
            while (!st.empty() && st.top() < nums2[i])
                st.pop();
            
            // Assign the next greater element to nums2[i] in map
            if (!st.empty())
                m[nums2[i]] = st.top();
            else
                m[nums2[i]] = -1;
            
            // Push nums2[i] onto stack
            st.push(nums2[i]);
        }
        
        // Construct the result for nums1 using the map
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++) {
            ans.push_back(m[nums1[i]]);
        }
        
        return ans;
    }
};
