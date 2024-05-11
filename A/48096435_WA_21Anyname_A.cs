using System;

class Program
{
    static void Main()
    {
        int n = int.Parse(Console.ReadLine());

        int[,] matrix = new int[n, n];

        
        for (int i = 0; i < n; i++)
        {
            string[] row = Console.ReadLine().Split();
            for (int j = 0; j < n; j++)
            {
                matrix[i, j] = int.Parse(row[j]);
            }
        }

       
        int totalSum = 0;

        
        for (int i = 0; i < n; i++)
        {
            totalSum += matrix[i, i];
            totalSum += matrix[i, n - i - 1];
        }

        
        for (int i = 0; i < n; i++)
        {
            totalSum += matrix[n / 2, i];
            totalSum += matrix[i, n / 2];
        }

        
        totalSum -= matrix[n / 2, n / 2];

        
        Console.WriteLine(totalSum);
    }
}
