#ifndef PASSWORDGETTER_HH
#define PASSWORDGETTER_HH

#include <vector>
#include <string>
#include "Hasher.hh"
class PasswordGetter
{
    public:
        std::vector<std::string> GetPasswordsHashes();
};

#endif