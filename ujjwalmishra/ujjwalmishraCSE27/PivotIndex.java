import java.util.Scanner;

public class PivotIndex {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Input array size
        System.out.print("Enter number of elements: ");
        int n = sc.nextInt();
        int[] nums = new int[n];

        // Input array elements
        System.out.print("Enter the elements: ");
        for (int i = 0; i < n; i++) {
            nums[i] = sc.nextInt();
        }

        // Calculate total sum of the array
        int total = 0;
        for (int i = 0; i < n; i++) {
            total += nums[i];
        }

        int leftSum = 0;
        int pivotIndex = -1;

        for (int i = 0; i < n; i++) {
            int rightSum = total - leftSum - nums[i];
            if (leftSum == rightSum) {
                pivotIndex = i;
                break;
            }
            leftSum += nums[i];
        }

        System.out.println("Pivot Index: " + pivotIndex);
    }
}
