class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // Both strings have to be same length
        // All occurrences of a character in s must be replaced w/ a character in t while preserving the order of t
        // Once a character from s is mapped to a char in t, it must hold that mapping

        // Return false if strings are different lengths
        if (s.length() != t.length()) {
            return false;
        }
        std::unordered_map<char, char> st;
        std::unordered_map<char, char> ts;

        // Iterate through length of s and t
        for (size_t i = 0; i < s.length(); i++) {
            char c1, c2;
            c1 = s[i]; // r
            c2 = t[i]; // o

            // Check if exists in hashmap and current mapped val is different than current iteration val
            if ((st.find(c1) != st.end() && st[c1] != c2) || 
                (ts.find(c2) != ts.end() && ts[c2] != c1)) 
            {
                return false;
            }

            // Map s to t and t to s
            st[c1] = c2;
            ts[c2] = c1;
        }
        return true;
    }
};

/*
c1 = r, c2 = e
Map 1:
    p -> t
    a -> i
    e -> l

Map 2:
    t -> p
    i -> a
    l -> e
*/
