class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // Create vector that will be of size 2n
        const int NUMS_SIZE = nums.size();
        std::vector<int> ans(NUMS_SIZE * 2);
        
        // Loop through nums twice and append each ele to ans
        for (size_t i = 0; i < NUMS_SIZE; i++) {
            ans[i] = nums[i];
            ans[i + NUMS_SIZE] = nums[i];
        }
        return ans;
    }
};