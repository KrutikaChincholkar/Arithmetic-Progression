using System;

class Program
{
    static void Main()
    {
        int a, d, n;

        Console.Write("Enter first term: ");
        a = Convert.ToInt32(Console.ReadLine());

        Console.Write("Enter common difference: ");
        d = Convert.ToInt32(Console.ReadLine());

        Console.Write("Enter number of terms: ");
        n = Convert.ToInt32(Console.ReadLine());

        Console.WriteLine("Arithmetic Progression:");

        for (int i = 0; i < n; i++)
        {
            Console.Write((a + i * d) + " ");
        }
    }
}
