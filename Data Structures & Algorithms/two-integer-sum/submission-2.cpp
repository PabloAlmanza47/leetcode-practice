class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> helper;
        
        for (int i = 0; i < nums.size(); i++) {
            if (helper.find(target - nums.at(i)) != helper.end()) {
                return {helper[target - nums.at(i)], i};
            }
            helper[nums.at(i)] = i;
        }
        //just incase there is no match at all
        return {};
    }
};
