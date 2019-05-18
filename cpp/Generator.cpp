#include "Generator.hh"

Generator::Generator(std::string _chars, int _maxOutputLength)
{
    maxOutputLength = _maxOutputLength;
    chars = _chars;
}

void Generator::Generate()
{
    ProduceString("");
}

void Generator::ProduceString(std::string word)
{
    if(word.length() >= maxOutputLength)
    {
        return;
    }

    std::string newWord = "";
    for(int i = 0; i < chars.length(); i++)
    {
        newWord = word + chars[i];
        std::cout << newWord << std::endl;
        ProduceString(newWord);
    }
    
    return;
}