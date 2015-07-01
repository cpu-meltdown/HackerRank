using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
class Solution
{
    static void Main(String[] args)
    {
        int t = Int32.Parse(Console.ReadLine());
        while (t-- > 0)
        {
            int n = Int32.Parse(Console.ReadLine());
            String[] a = new String[n];
            for (int i = 0; i < n; i++)
            {
                a[i] = String.Concat(Console.ReadLine().OrderBy(c => c));
            }

            int k = 0, j = 0;
            bool flag = true;
            while (k < n)
            {
                j = 0;
                while (j < n - 1)
                {
                    if (a[j][k] > a[j + 1][k])
                    {
                        flag = false; break;
                    }
                    j++;
                }
                if (!flag)
                    break;
                k++;
            }
            if (flag)
                Console.WriteLine("YES");
            else
                Console.WriteLine("NO");
        }
    }
}