using System.Collections.Generic;

namespace dotnet 
{
    public static class Extensions
    {
        public static void PrintItems<T>(this IEnumerable<T> collection)
        {
            foreach (var item in collection)
            {
                System.Console.WriteLine(item);
            }
        }
    }
}