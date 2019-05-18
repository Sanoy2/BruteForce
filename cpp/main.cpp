#include <iostream>
#include <vector>
#include <map>
#include "Hasher.hh"
#include "PasswordGetter.hh"
#include "PasswordBreaker.hh"

int main(int argc, char** argv) 
{
    std::string chars = std::string(argv[1]);
    int maxLength = strtol(argv[2], NULL, 10);

    PasswordGetter passwordGetter;
    auto digests = passwordGetter.GetPasswordsHashes();

    for (int i = 0; i < digests.size(); i++)
    {
        std::cout << digests[i] << std::endl;
    }

    PasswordBreaker passwordBreaker(chars, digests, maxLength);
    auto brokenPasswords = passwordBreaker.StartBreaking();

    std::map<std::string, std::string>::iterator mapIterator; 
    std::cout << "Results: " << std::endl;
    for (mapIterator = brokenPasswords.begin(); 
        mapIterator != brokenPasswords.end(); 
        ++mapIterator) 
    { 
        std::cout << "\tHash: " << mapIterator->first 
        << "\tWord: " << mapIterator->second << "\n"; 
    } 
    std::cout << std::endl; 

    return 0;
}