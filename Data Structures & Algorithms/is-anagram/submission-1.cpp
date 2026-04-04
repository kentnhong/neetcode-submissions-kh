#include <unordered_map>
#include <cstddef>

class Solution {
public:
    // Helper func to convert string to hash map
    std::unordered_map<char, size_t> string_to_hash(string s) {
        std::unordered_map<char, size_t> result;
        for (const auto& letter : s) {
            if (result.find(letter) == result.end()) {
                result[letter] = 0;
            }
            result[letter] += 1;
        } 
        return result;
    }

    bool isAnagram(string s, string t) {
       // Create hash map for s and t
       std::unordered_map<char, size_t> s_map = string_to_hash(s);
       std::unordered_map<char, size_t> t_map = string_to_hash(t);

       // Iterate through chars and compare if the count is the same in each hash map
       for (const auto& letter : s) {
        if (s_map[letter] != t_map[letter]) {
            return false;
        }
       }

       for (const auto& letter : t) {
        if (s_map[letter] != t_map[letter]) {
            return false;
        }
       }

       return true;       
    }
};
