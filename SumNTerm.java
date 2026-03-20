import java.util.Scanner;

public class APSum {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter first term: ");
        int a = sc.nextInt();

        System.out.print("Enter common difference: ");
        int d = sc.nextInt();

        System.out.print("Enter number of terms: ");
        int n = sc.nextInt();

        double sum = (n * (2 * a + (n - 1) * d)) / 2.0;

        System.out.println("Sum of first " + n + " terms = " + sum);

        sc.close();
    }
}
