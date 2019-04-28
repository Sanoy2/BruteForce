using System;
using System.Collections.Generic;
using System.Linq;

namespace dotnet
{
    public class Generator
    {
        private readonly string chars;
        private readonly int maxOutputLength;
        private List<string> words;
        public IEnumerable<string> Words 
        { 
            get => SortWords(words.AsQueryable()).ToList();
        }

        public Generator(string chars, int maxOutputLength)
        {
            this.chars = chars;
            this.maxOutputLength = maxOutputLength;
            words = new List<string>();
        }

        public void Generate()
        {
            ProduceString();
        }

        private void ProduceString(string word = "")
        {
            if(!String.IsNullOrEmpty(word))
            {
                words.Add(word);
            }

            if(word.Length >= maxOutputLength)
            {
                return;
            }

            string newWord = "";
            for (int i = 0; i < chars.Length; i++)
            {
                newWord = word + chars[i];
                ProduceString(newWord);                
            }

            return;
        }

        public void Print()
        {
            foreach (var word in SortWords(words.AsQueryable()))
            {
                System.Console.WriteLine(word);
            }
        }

        private IQueryable<string> SortWords(IQueryable<string> words)
        {
            return words.OrderBy(n => n.Length).ThenBy(n => n);
        }
    }
}
