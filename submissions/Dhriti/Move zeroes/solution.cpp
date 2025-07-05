class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         int pos = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[pos++] = nums[i];
        }
    }

    while (pos < nums.size()) {
        nums[pos++] = 0;
    }
}
        
    };
