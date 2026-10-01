class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> map;

        if(s.length() != t.length()){
            return false;
        }

        for(int i = 0; i < s.length(); i++){
            if(map.count(s[i])){
                map[s[i]] = map[s[i]] + 1;
            }
            else{
                map[s[i]] = 1;
            }
        }

        for(int i = 0; i < t.length(); i++){
            if(map.count(t[i])){
                map[t[i]] = map[t[i]] - 1;
            }
            else{
                return false;
            }
        }

        for(int i = 0; i < s.length(); i++){
            if(map[s[i]] != 0){
                return false;
            }
        }

        return true;  
    }
};
