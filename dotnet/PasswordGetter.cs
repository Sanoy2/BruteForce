using System.Collections.Generic;

namespace dotnet
{
    public class PasswordGetter
    {
        public IEnumerable<string> GetPasswordsHashes()
        {
            var digests = new List<string>();

            var hasher = new Hasher();
            digests.Add(hasher.Make_Hash_SHA256("abc"));
            digests.Add(hasher.Make_Hash_SHA256("qaz"));
            digests.Add(hasher.Make_Hash_SHA256("sdf"));
            digests.Add(hasher.Make_Hash_SHA256("zxc"));
            digests.Add(hasher.Make_Hash_SHA256("sdf"));
            digests.Add(hasher.Make_Hash_SHA256("zmp"));

            return digests;
        }
    }
}