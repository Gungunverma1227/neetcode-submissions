class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

    unordered_set<int> store(nums.begin(), nums.end());

    int ans = 0;

    for(int num : store){

        // Is this the beginning of a sequence?
        if(store.find(num-1)==store.end()){

            int curr = num;
            int streak = 1;

            // Keep moving forward
            while(store.find(curr+1)!=store.end()){
                curr++;
                streak++;
            }

            ans = max(ans, streak);
        }
    }

    return ans;
        
    }
};
