using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;

        for(int i = 0; i < nums.size(); i++){

            int rest = target - nums[i];

            if(map.find(rest) != map.end()){
                return {map[rest], i};
            }

            if(map.find(nums[i]) == map.end()){
                map[nums[i]] = i;
            }
        }
    }
};
