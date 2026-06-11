class Solution {
public:
    int maxNumberOfBalloons(string text) {
        // Variable to keep track of balloon count
        // Convert text into hashmap of balloon and the count of those chars frequencies
        // Set flag as true
        // While flag is true
            // Iterate through word "balloon"
                // Look up current char in hashmap
                    // If count is 0, set flag to false
                        // Break
                    // Else subtract count
            // Increment balloon count
        // Return balloon count

        int count = 0;
        std::unordered_map<char, int> hashmap;
        std::string word = "balloon";
        std::unordered_set<char> balloon{word.begin(), word.end()};
        for (const char& s : text) {
            if (balloon.find(s) == balloon.end()) {
                continue;
            }
            hashmap[s]++;
        }
        bool flag = true;
        while (flag) {
            for (const char& c : word) {
                if (hashmap[c] == 0) {
                    flag = false;
                    break;
                }
                hashmap[c]--;
            }
            if (flag) {
                count++;
            }
        }
        return count;
        /*
        b : 0
        a : 0
        l : 0
        o : 0
        n : 0
        */
    }
};