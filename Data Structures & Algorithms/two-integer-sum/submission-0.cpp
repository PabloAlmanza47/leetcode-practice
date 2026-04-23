class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, pair<int, int>> helper;
        int current_index = 0;


        for (int current_num : nums) {
            helper[current_num] = {current_index ,target - current_num};
            current_index++;
        }

        for (auto current_pair : helper) {
            //check if the second value exits in the numbers given
            if (helper.find(current_pair.second.second) != helper.end()) {
                return {helper[current_pair.second.second].first, current_pair.second.first};
            }
        }
    }
};
