class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Goal: find all matching anagrams in array and group together into sublist
        // Store occurence of chars in alphabet and the string in hash map
        std::unordered_map<std::string, std::vector<std::string>> str_map;
        // Iterate through strs
        for (const auto& str : strs) {
            // Create vector with correlation of letters a-z to indice
            std::vector<int> alphabet(26, 0);
            // Iterate through individual string
            for (const auto& s : str) {
                // Correlate each letter in string with alphabet vector indice and add
                int idx = s - 'a';
                alphabet[idx]++;
            }
            // Convert alphabet vector to string
            std::string alphabet_str = std::to_string(alphabet[0]);
            for (int i = 1; i < 26; i++) {
                alphabet_str += "," + std::to_string(alphabet[i]);
            }
            // Use alphabet string as key and add strs string as value
            str_map[alphabet_str].push_back(str);
        }
        // Convert hash map values to a vector substring list
        std::vector<std::vector<std::string>> result;
        for (const auto& keyval : str_map) {
            result.push_back(keyval.second);
        }
        return result;    
    }
};
