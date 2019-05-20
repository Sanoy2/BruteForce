using System.Collections.Generic;
using System.IO;

namespace dotnet
{
    public class ResultSaver
    {
        public void SaveResults(string path, IDictionary<string, string> result)
        {
            FileStream fileStream = new FileStream(path, FileMode.Create);
            using (StreamWriter writer = new StreamWriter(fileStream))
            {
                foreach (var digest in result)
                {
                    writer.WriteLine($"{digest.Key} ; {digest.Value}");
                }
            }
        }
    }
}