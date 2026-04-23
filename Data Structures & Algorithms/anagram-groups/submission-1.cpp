class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hash_helper;

        for (const auto& current_string : strs) {
            string helper_string = current_string;
            sort(helper_string.begin(), helper_string.end());
            hash_helper[helper_string].push_back(current_string);
        }
        vector<vector<string>> result;
        for (auto current_pair : hash_helper) {
            results.push_back(current_pair.second);
        }
        return results;
    }
};
