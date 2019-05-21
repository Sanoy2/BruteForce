using System;

namespace dotnet
{
    public class Program
    {
        static void Main(string[] args)
        {
            string chars = args[0];
            int maxLength = Int32.Parse(args[1]);
            string digestsToBrakeFilepath = args[2];
            string filepath="../results/dotnetBroken.txt";
            
            var passwordGetter = new PasswordGetter();
            var digests = passwordGetter.GetPasswordsHashes(digestsToBrakeFilepath);
            var breaker = new PasswordBreaker(chars, digests, maxLength);
            var result = breaker.StartBreaking();

            // foreach (var item in result)
            // {
            //     System.Console.WriteLine($"Digest : {item.Key} Word: {item.Value}");
            // }

            var resultSaver = new ResultSaver();
            resultSaver.SaveResults(filepath, result);
        }
    }
}
