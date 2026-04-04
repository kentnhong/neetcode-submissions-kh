#include <unordered_map>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // Keep track of the ele in nums and its count
        std::unordered_map<int, int> num_map{};
        // Fill hash map
        for (const auto& ele : nums) {
            if (num_map.find(ele) == num_map.end()) {
                num_map[ele] = 0;
            }
            num_map[ele] += 1;
        }
        // Iterate through nums and check if count is > 1
        for (const auto& num : nums) {
            if (num_map[num] > 1) {
                return true;
            }
        }
        return false;
    }
};