class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> helper;
        for (int current_num : nums) {
            if (helper[current_num] != 0) return true;
            helper[current_num]++;
        }


        return false;
    }
};