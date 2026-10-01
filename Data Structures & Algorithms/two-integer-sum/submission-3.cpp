class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> seen;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            int j = target - nums[i];
            if(seen.find(j) != seen.end())
            {
                return {seen[j], i};
            }
            seen[nums[i]] = i;
        }
        return { } ;
    }
};
