class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Can iterate through array and check if complement is in hash map
        // Store new value in hash map every iteration
        std::unordered_map<int, int> num_map;
        int i = 0;
        for (const auto& num : nums) {
            // Check if complement is in hash map
            int complement = target - num;
            if (num_map.find(complement) != num_map.end()) {
                return std::vector<int>{num_map[complement], i};
            }
            // Add new key-val pair to hash map
            num_map.insert({num, i});
            i++;
        }
    }
};
