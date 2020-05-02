using System;
using System.Runtime.InteropServices;

public class Test
{
    [DllImport("libtest.so", EntryPoint = "mult")]
    static extern int mult(int a, int b);

    [DllImport("libtest.so", EntryPoint = "sum")]
    static extern int sum(int a, int b);

    public static void Main(string[] args)
    {
        Console.WriteLine("Hello Mono World");
        Console.WriteLine(Convert.ToString(mult(5, 4)));
        Console.WriteLine(Convert.ToString(sum(5, 4)));
    }
}
