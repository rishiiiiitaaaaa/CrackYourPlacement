class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        std::stack<std::pair<int, int>> s;
        std::vector<int> ret(temperatures.size());
        for (int i = 0; i < temperatures.size(); ++i) {
            if (s.empty()) {
                s.push({i, temperatures[i]});
            } else {
                while (!s.empty() && temperatures[i] > s.top().second) {
                    ret[s.top().first] = i - s.top().first;
                    s.pop();
                }
                s.push({i, temperatures[i]});
            }
        }
        return ret;
    }
};
