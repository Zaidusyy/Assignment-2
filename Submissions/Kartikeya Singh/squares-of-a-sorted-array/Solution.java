import java.util.Arrays;
class Solution {
    public int[] sortedSquares(int[] nums) {
        int ind=0;
        int n=nums.length;
        for(int i=0;i<n;i++){
            nums[ind++]=nums[i]*nums[i];
        }
        Arrays.sort(nums);
        return nums;
    }
}