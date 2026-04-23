class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Can iterate through array and check if complement is in hash map
        // Store new value in hash map every iteration
        std::unordered_map<int, int> num_map;
        int i = 0;
        for (const auto& num : nums) {
            // Check if complement is in hash map
            auto it = num_map.find(target - num);
            if (it != num_map.end()) {
                return std::vector<int>{it->second, i};
            }
            // Add new key-val pair to hash map
            num_map.insert({num, i});
            i++;
        }
    }
};
