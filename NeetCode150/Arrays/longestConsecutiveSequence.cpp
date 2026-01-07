class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> set;
        int longest = 0;
        for(int i = 0; i<nums.size(); i++) {
            set.insert(nums[i]);

        }


        for(int element : set) {
            if(set.count(element - 1)) {
                continue;
            }
            else {
                int sum = 1;
                
                while(set.count(element + 1)) {
                    element++;
                    sum++;

                }
                longest = max(longest, sum);

                
            }
        }
        return longest;
     }
};