#include "PasswordGetter.hh"

std::vector<std::string> PasswordGetter::GetPasswordsHashes()
{
    std::vector<std::string> digests;
    Hasher hasher;
    digests.push_back(hasher.Hash("abc"));
    digests.push_back(hasher.Hash("qaz"));
    digests.push_back(hasher.Hash("sdf"));
    digests.push_back(hasher.Hash("zXz"));
    digests.push_back(hasher.Hash("zmp"));

    return digests;
}

std::vector<std::string> PasswordGetter::GetPasswordsHashes(std::string path)
{
    std::ifstream file;
    std::vector<std::string> digests;

    std::string line;

    file.open(path);

    if(!file)
    {
        std::cerr << "Error while opening the file " << path << std::endl;
        return std::vector<std::string>();
    }
    while(!file.eof())
    {
        getline(file, line);
        for (auto & c: line) c = toupper(c);    // to uppercase (hash produces uppercase)
        digests.push_back(line);
    }
    
    file.close();

    return digests;
}