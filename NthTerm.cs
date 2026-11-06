
using System;

class Program
{
    static void Main()
    {
        int a, d, n, nth;

        Console.Write("Enter first term: ");
        a = Convert.ToInt32(Console.ReadLine());

        Console.Write("Enter common difference: ");
        d = Convert.ToInt32(Console.ReadLine());

        Console.Write("Enter term number (n): ");
        n = Convert.ToInt32(Console.ReadLine());

        nth = a + (n - 1) * d;

        Console.WriteLine($"The {n}th term of the AP is: {nth}");
    }
}
