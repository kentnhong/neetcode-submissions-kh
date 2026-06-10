class Solution {
public:
    int maxDifference(string s) {
        // Convert string to hashmap (key-char, val-freq)
        std::unordered_map<char, int> hashmap;
        for (const char& c : s) {
            hashmap[c]++;
        }
        int largest_odd_count = std::numeric_limits<int>::lowest();
        int smallest_even_count = std::numeric_limits<int>::max();
        char largest_odd_char = ' ';
        char smallest_even_char = ' ';
        for (const char& c : s) {
            // Find largest odd
            if (hashmap[c] > largest_odd_count && hashmap[c] % 2 != 0) {
                largest_odd_count = hashmap[c];
                largest_odd_char = c;
            }
            // Find smallest even
            if (hashmap[c] < smallest_even_count && hashmap[c] % 2 == 0) {
                smallest_even_count = hashmap[c];
                smallest_even_char = c;
            }
        }
        
        // Subtract and return result
        return largest_odd_count - smallest_even_count;
    }
};