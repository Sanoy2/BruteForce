#include "PasswordBreaker.hh"

PasswordBreaker::PasswordBreaker(std::string charsToCombine, std::vector<std::string> digests)
{
    PasswordBreaker(charsToCombine, digests, 50);
}

PasswordBreaker::PasswordBreaker(std::string charsToCombine, std::vector<std::string> digests, int maxLength)
{
    chars = charsToCombine;
    passwordsToBreak = digests; // in c++ "=" make a copy of the vector, not reference
    maxOutputLength = maxLength;
}

std::map<std::string, std::string> PasswordBreaker::StartBreaking()
{
    ProduceString("");
    return brokenPasswords;
}

void PasswordBreaker::ProduceString(std::string word)
{
    if(word.length() >= maxOutputLength || passwordsToBreak.size() == 0)
    {
        return;
    }

    std::string newWord = "";
    std::string digest = "";
    for(int i = 0; i < chars.length(); i++)
    {
        newWord = word + chars[i];
        digest = hasher.Hash(newWord);
        // std::cout << newWord << " : " << digest << std::endl;

        CompareDigests(digest, newWord);

        if(passwordsToBreak.size() == 0)
        {
            return;
        }
        else
        {
            ProduceString(newWord);
        }
    }
    
    return;
}

void PasswordBreaker::CompareDigests(std::string digest, std::string word)
{
    for (unsigned int i = 0; i < passwordsToBreak.size(); i++)
    {
        if(digest == passwordsToBreak[i])
        {
            // std::cout << "HIT! " << std::endl;
            // std::cout << "Digest : " << digest << std::endl;
            // std::cout << "Word   : " << word << std::endl << std::endl; 
            brokenPasswords.insert(std::pair<std::string, std::string>(digest, word));
            passwordsToBreak.erase(passwordsToBreak.begin() + i);
            CompareDigests(digest, word);
            return;
        }
    }
    
}
