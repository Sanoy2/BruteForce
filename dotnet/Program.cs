using System;

namespace dotnet
{
    public class Program
    {
        static void Main(string[] args)
        {
            var chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
            chars += chars.ToLower();
            chars += "`1234567890-=~!@#$%^&*()_+[]\\{}|;':\",./<>?";

            var maxOutputLength = 4;

            var generator = new Generator(chars, maxOutputLength);
            generator.Generate();
            // generator.Print();
            foreach (var word in generator.Words)
            {
                System.Console.WriteLine($"{word} : {word.Make_Hash_SHA256()}");
            }
        }
    }
}
