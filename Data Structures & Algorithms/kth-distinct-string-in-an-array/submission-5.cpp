class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        // District String - string only appears once in array
        // Use hashmap1 to store string and its count
        std::unordered_map<std::string, int> hashmap1;
        for (const auto& s : arr) {
            hashmap1[s]++;
        }
         // Use hashmap2 to store district string and its kth position
        size_t i = 1;
        std::unordered_map<int, std::string> hashmap2;
        for (const auto& s : arr) {
            if (hashmap1[s] != 1) {
                continue;
            }
            hashmap2[i] = s;
            i++;
        }
        if (hashmap2.find(k) == hashmap2.end()) {
            return "";
        }
        return hashmap2[k];
    }
};