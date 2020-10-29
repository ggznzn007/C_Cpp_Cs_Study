using System;
using System.Collections;

/* python : dict
 * stl : map
 */

namespace _34_HashTable
{
    class Program
    {
        static void Main(string[] args)
        {
            Hashtable ht = new Hashtable();
            ht.Add("boy", "소년");
            ht.Add("girl", "소녀");
            ht["school"] = "학교";
            Console.WriteLine(ht["boy"]);
        }
    }
}
