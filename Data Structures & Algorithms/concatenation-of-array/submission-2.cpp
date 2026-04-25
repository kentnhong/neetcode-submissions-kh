class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // Create vector that will be of size 2n
        std::vector<int> ans(nums.size() * 2);
        
        // Loop through nums twice and append each ele to ans
        for (size_t i = 0; i < nums.size(); i++) {
            ans[i] = nums[i];
            ans[i + nums.size()] = nums[i];
        }
        return ans;
    }
};