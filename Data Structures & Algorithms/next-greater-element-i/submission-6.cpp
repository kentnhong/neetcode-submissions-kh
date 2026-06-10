class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // Convert nums1 to hashmap (key-num, val-indice)
        std::vector<int> result;
        result.resize(nums1.size());
        // Iterate through nums1
        size_t i = 0;
        for (const int& num : nums1) {
            int j = 0;
            int current_largest = std::numeric_limits<int>::lowest();
            bool largest_found = false;
            // Find current ele of nums1 in nums2
            while (nums1[i] != nums2[j])
            {
                j++;
            }
            current_largest = nums2[j];
            // When found, keep iterating until we find next largest or none
            if (j != nums2.size() - 1) {
                for (size_t k = j + 1; k < nums2.size(); k++) {
                    if (nums2[k] > current_largest) {
                        current_largest = nums2[k];
                        result[i] = current_largest;
                        largest_found = true;
                        break;
                    }
                }
            }
            if (!largest_found) {
                result[i] = -1;
            }
            i++;
        }
        return result;
    }
};