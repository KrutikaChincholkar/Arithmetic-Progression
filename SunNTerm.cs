using System;

class Program
{
    static void Main()
    {
        int a, d, n;
        double sum;

        Console.Write("Enter first term: ");
        a = Convert.ToInt32(Console.ReadLine());

        Console.Write("Enter common difference: ");
        d = Convert.ToInt32(Console.ReadLine());

        Console.Write("Enter number of terms: ");
        n = Convert.ToInt32(Console.ReadLine());

        sum = (n * (2 * a + (n - 1) * d)) / 2.0;

        Console.WriteLine($"Sum of first {n} terms = {sum:F2}");
    }
}
