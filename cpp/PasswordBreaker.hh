#ifndef PASSWORD_BREAKER_HH
#define PASSWORD_BREAKER_HH

#include <string>
#include <iostream>
#include <vector>
#include <map>

#include "Hasher.hh"

class PasswordBreaker
{
    public:
        std::map<std::string, std::string> StartBreaking();
        PasswordBreaker(std::string, std::vector<std::string>, int);
        PasswordBreaker(std::string, std::vector<std::string>);

    private:
        std::vector<std::string> passwordsToBreak;
        std::map<std::string, std::string> brokenPasswords;
        std::string chars;
        int maxOutputLength;
        Hasher hasher;

        void ProduceString(std::string);
        void CompareDigests(std::string, std::string);
};

#endif