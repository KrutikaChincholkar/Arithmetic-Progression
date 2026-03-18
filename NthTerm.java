import java.util.Scanner;

public class APNthTerm {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter first term: ");
        int a = sc.nextInt();

        System.out.print("Enter common difference: ");
        int d = sc.nextInt();

        System.out.print("Enter term number (n): ");
        int n = sc.nextInt();

        int nth = a + (n - 1) * d;

        System.out.println("The " + n + "th term of the AP is: " + nth);

        sc.close();
    }
}
