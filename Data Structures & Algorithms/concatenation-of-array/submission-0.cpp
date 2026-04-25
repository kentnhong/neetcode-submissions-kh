class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // Create vector that will be of size 2n
        std::vector<int> ans;
        // Loop through nums twice and append each ele to ans
        for (size_t i = 0; i < 2; i++) {
            for (const auto& num : nums) {
                ans.push_back(num);
            }
        }
        return ans;
    }
};