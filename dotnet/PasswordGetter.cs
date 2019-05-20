using System.Collections.Generic;
using System.IO;

namespace dotnet
{
    public class PasswordGetter
    {
        public IEnumerable<string> GetPasswordsHashes(string path)
        {
            var result = new List<string>();
            string line;

            FileStream fileStream = new FileStream(path, FileMode.Open);
            using (StreamReader reader = new StreamReader(fileStream))
            {
                while (!reader.EndOfStream)
                {
                    line = reader.ReadLine();
                    line = line.Trim();
                    if(line.Length == 64)
                    {
                        result.Add(line.ToLower());
                    }
                }
            }

            return result;
        }
    }
}