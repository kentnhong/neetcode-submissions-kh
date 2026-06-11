class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        // Store numbers that do not appear in nums from range [1, n] in an array
        std::vector<int> result;
        // Convert nums to a set (we don't care if they appear more than once we just care about O(1) lookup)
        std::unordered_set<int> set_nums{nums.begin(), nums.end()};
        // Iterate from 1 to n and check if its in the set, if not add to result
        for (size_t i = 1; i <= n; i++) {
            if (set_nums.find(i) == set_nums.end()) {
                result.push_back(i);
            }
        }
        return result;
    }
};