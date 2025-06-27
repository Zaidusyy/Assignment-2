int pivotIndex(int* nums, int n) {
    int sum = 0, left = 0;

    for (int i = 0; i < n; i++)
        sum += nums[i];

    for (int i = 0; i < n; i++) {
        if (left == sum - left - nums[i])
            return i;
        left += nums[i];
    }

    return -1;
}