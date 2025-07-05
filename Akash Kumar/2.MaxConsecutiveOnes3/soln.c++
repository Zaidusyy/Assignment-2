//LeetCode Environment
//Time Complexity=O(N)
//Space Complexity=O(1)

class Solution {
 public:
  int longestOnes(vector<int>& nums, int k) 
  {
    int ans=0;
    int l=0;
    for (int r=0;r<nums.size();r++) 
    {
        if (nums[r]==0) 
        {
            k--;
        }
        if (k<0) 
        {
            if (nums[l]==0) 
            {
                k++;
            }
            l++;
        }
        ans=max(ans,r-l+1);
    }
    return ans;
  }
};
