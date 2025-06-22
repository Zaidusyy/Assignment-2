class Solution {
    public int maxArea(int[] height) {
        int vol = 0;
        int i=0;
        int j = height.length-1;
        while(i<j)
        {
            int h = Math.min(height[i],height[j]);
            int v = h*(j-i);
            vol = (v>vol)?v:vol;
            if(height[i]>height[j])
                j--;
            else
                i++;
        }
        return vol;
    }
}