class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Convert vector into hashmap (key-num, val-count)
        std::unordered_map<int, int> hashmap;
        for (const int& num : nums) {
            hashmap[num]++;
        }
        // Iterate and find largest val in hashmap
        int count = std::numeric_limits<int>::lowest();
        int largest;
        for (const int& num : nums) {
            if (hashmap[num] > count) {
                count = hashmap[num];
                largest = num;
            }
        }
        return largest;
    }
};