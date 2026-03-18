import java.util.Scanner;

public class ArithmeticProgression {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter first term: ");
        int a = sc.nextInt();

        System.out.print("Enter common difference: ");
        int d = sc.nextInt();

        System.out.print("Enter number of terms: ");
        int n = sc.nextInt();

        System.out.println("Arithmetic Progression:");

        for(int i = 0; i < n; i++) {
            System.out.print((a + i * d) + " ");
        }

        sc.close();
    }
}
