using System;
using System.Collections.Generic;
using System.IO;
class Solution
{
    /* Head ends here */
    static int stringReduction(string a)
    {
        int numa = 0, numb = 0, numc = 0, result;
        for (int i = 0; i < a.Length; i++)
        {
            if (a[i] == 'a')
                numa++;
            else if (a[i] == 'b')
                numb++;
            else
                numc++;
        }
        if ((numa == 0 && numb == 0) || (numa == 0 && numc == 0) || (numb == 0 && numc == 0))
        {
            result = a.Length;
        }
        else if ((numa % 2 == 0 && numb % 2 == 0 && numc %2 == 0) || (numa % 2 == 1 && numb % 2 == 1 && numc %2 == 1))
        {
            result = 2;
        }
        else if (numa == 0 || numc==0 || numb ==0)
        {
            result = 1;
        }
        else
            result = 1;
        return result;
    }
    /* Tail starts here */
    static void Main(String[] args)
    {
        int res;
        int _t_cases = Convert.ToInt32(Console.ReadLine());
        for (int _t_i = 0; _t_i < _t_cases; _t_i++)
        {
            String _a = Console.ReadLine();
            res = stringReduction(_a);
            Console.WriteLine(res);
        }
    }
}
