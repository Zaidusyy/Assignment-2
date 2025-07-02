import java.util.Scanner;

public class MoveZeros {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        
        System.out.print("Enter number of elements: ");
        int n = sc.nextInt();
        int[] nums = new int[n];

        
        System.out.print("Enter the elements: ");
        for (int i = 0; i < n; i++) {
            nums[i] = sc.nextInt();
        }

        
        int index = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                nums[index] = nums[i];
                index++;
            }
        }

       
        while (index < n) {
            nums[index] = 0;
            index++;
        }

        System.out.print("Output: ");
        for (int i = 0; i < n; i++) {
            System.out.print(nums[i] + " ");
        }
    }
}
