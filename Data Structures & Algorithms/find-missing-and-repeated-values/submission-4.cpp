class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        // Get size of 2d matrice and find n^2
        int n = grid[0].size();
        int n2 = n * n;
        const int low = 1;
        const int high = n2;
        // Iterate through 2D matrice and store the number and count in hashmap
        std::unordered_map<int, int> hashmap;
        for (size_t i = 0; i < n; i++) {
            for (size_t j = 0; j < n; j++) {
                hashmap[grid[i][j]]++;
            }
        }
        // Iterate from low to high and check if the current number appears twice or doesnt appear
        std::vector<int> result;
        result.resize(2);
        for (size_t i = low; i <= high; i++) {
            if (hashmap.find(i) != hashmap.end() && hashmap[i] == 2) {
                result[0] = i;
            } else if (hashmap.find(i) == hashmap.end()) {
                result[1] = i;
            }
        }
        return result;
    }
};