using System;
using System.Collections.Generic;
using System.IO;
class Solution
{
    static void Main(String[] args)
    {
        string str;
        str = Console.ReadLine();
        string[] arr = str.Split(':');
        string result = "";
        if (arr[2].Substring(2, 2) == "PM")
        {
            if (arr[0] == "12")
                result = arr[0] + ":" + arr[1] + ":" + arr[2].Substring(0, 2);
            else
                result = (Int32.Parse(arr[0]) + 12).ToString() + ":" + arr[1] + ":" + arr[2].Substring(0, 2);
        }
        else
        {
            if (arr[0] == "12")
                result = "00" + ":" + arr[1] + ":" + arr[2].Substring(0, 2);
            else
                result = arr[0] + ":" + arr[1] + ":" + arr[2].Substring(0, 2);
        }
        Console.WriteLine(result);
    }
}