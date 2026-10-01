class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        map<array<int, 26>, vector<string>> m;
        vector<vector<string>> res;

        for(auto s : strs){
            array<int, 26> count = {0};

            for(int i = 0; i < s.length(); i++){
                count[s[i] - 'a'] += 1;
            }

            m[count].push_back(s);
        }

        

        for(const auto& [key, sList] : m){
            res.push_back(sList);
        }

        return res;
    }
};
