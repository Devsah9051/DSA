class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count_drops = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                count_drops++;
            }
            if (count_drops > 1) {
                return false;
            }
        }
        return true;
    }
    
};