using System.Collections.Generic;
using System.Linq;

namespace dotnet
{
    public class PasswordBreaker
    {
        private string chars;
        private List<string> passwordsToBreak;
        private int maxOutputLength;

        private Dictionary<string, string> brokenPasswords;
        private Hasher hasher;

        public PasswordBreaker(string charsToCombine, IEnumerable<string> digests, int maxLength = 50)
        {
            chars = charsToCombine;
            passwordsToBreak = digests.ToList();
            maxOutputLength = maxLength;

            brokenPasswords = new Dictionary<string, string>();
            hasher = new Hasher();
        }

        public IDictionary<string, string> StartBreaking()
        {
            ProduceString("");
            return brokenPasswords;
        }

        private void ProduceString(string word)
        {
            if(word.Length >= maxOutputLength || passwordsToBreak.Count == 0)
            {
                return;
            }

            string newWord = "";
            string digest = "";
            for (int i = 0; i < chars.Length; i++)
            {
                newWord = word + chars[i];
                digest = hasher.Make_Hash_SHA256(newWord);
                CompareDigests(digest, newWord);
                if(passwordsToBreak.Count == 0)
                {
                    return;
                }
                else
                {
                    ProduceString(newWord);
                }
            }
        }

        private void CompareDigests(string digest, string word)
        {
            foreach (var item in passwordsToBreak)
            {
                if(digest.Equals(item))
                {
                    System.Console.WriteLine("HIT!");
                    System.Console.WriteLine($"Digest: {digest}");
                    System.Console.WriteLine($"Word  : {word}");
                    brokenPasswords[digest] = word;
                    passwordsToBreak.Remove(digest);
                    CompareDigests(digest, word);
                    return;
                }
            }
        }
    }
}