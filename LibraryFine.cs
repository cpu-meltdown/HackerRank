using System;
using System.Collections.Generic;
using System.IO;
class Solution
{
    static void Main(String[] args)
    {
        string actual, expected;
        int fine;
        actual = Console.ReadLine();
        expected = Console.ReadLine();
        string[] arr1 = actual.Split(' ');
        string[] arr2 = expected.Split(' ');
        if (Int32.Parse(arr1[2]) <= Int32.Parse(arr2[2])){
            if (Int32.Parse(arr1[2]) < Int32.Parse(arr2[2]))
                fine = 0;
            else
            if (Int32.Parse(arr1[1]) < Int32.Parse(arr2[1]))
                fine = 0;
            else if (Int32.Parse(arr1[1]) == Int32.Parse(arr2[1]))
            {
                if (Int32.Parse(arr1[0]) <= Int32.Parse(arr2[0]))
                    fine = 0;
                else
                    fine = 15 * (Int32.Parse(arr1[0]) - Int32.Parse(arr2[0]));
            }
            else
                fine = 500 * (Int32.Parse(arr1[1]) - Int32.Parse(arr2[1]));
        }
        else fine = 10000;

        Console.WriteLine(fine); 
    }
}