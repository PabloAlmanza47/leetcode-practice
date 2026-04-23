class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> first_string;
        unordered_map<char, int> second_string;

        if (s.length() != t.length()) return false;

        //adding chars into first hash
        for (char current_char : s) {
            first_string[current_char]++;
        }
        
        //adding chars into first hash
        for (char current_char : t) {
            second_string[current_char]++;
        }

        //checker
        for (auto current_pair : first_string) {
            //quick exit
            if (second_string[current_pair.first] == 0 or current_pair.second != second_string[current_pair.first]) {
                return false;
            } 
        }
        return true;
    }
};
