// solution.java
import java.util.Scanner;

public class PalindromeCheck {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String str = sc.nextLine();  // Read input string

        // Reverse the input string
        String reversed = new StringBuilder(str).reverse().toString();

        // Check if the original string is equal to the reversed string
        if (str.equals(reversed)) {
            System.out.println("Palindrome");
        } else {
            System.out.println("Not Palindrome");
        }

        sc.close();  // Close the Scanner to avoid memory leaks
    }
}
