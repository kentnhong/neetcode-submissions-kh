class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        // Store emails in a hashmap (key-email, value-count)
        std::unordered_map<std::string, int> hashmap;
        // Decide if emails are the same or not based on '.' and '+' rules and different domain names
        for (const auto& email : emails) {
            // Store state of stripped email
            std::string stripped = "";
            // Flag to keep track if we encountered '+'
            bool is_plus = false;
            // Increment curr_idx to keep track of where '@' is
            int curr_idx = 0;
            // Iterate through current email until encountering '@'
            while (email[curr_idx] != '@') {
                // If encountered a '+' already or currently a '.', ignore and continue
                if (is_plus || email[curr_idx] == '.') {
                    curr_idx++;
                    continue;
                }
                // If '+' ignore it and continue
                else if (email[curr_idx] == '+') {
                    is_plus = true;
                    curr_idx++;
                    continue;
                }
                // Else append to stripped
                stripped += email[curr_idx];
                curr_idx++;
            }
            // Iterate through rest of email normally and append to stripped
            for (size_t i = curr_idx; i < email.length(); i++) {
                stripped += email[i];
            }
            // Add stripped email to hashmap and increment its count
            hashmap[stripped]++;
        }
        // Return number of elements in the hashmap
        return hashmap.size();
    }
};