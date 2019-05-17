#include <iostream>
#include "Generator.hh"
#include "Hasher.hh"

int main(int argc, char** argv) 
{
    // std::string chars = std::string(argv[1]);
    // int maxLength = strtol(argv[2], NULL, 10);

    // Generator generator(chars, maxLength);
    // generator.Generate();

    Hasher hasher;
    std::string text = "Hello from main";
    std::string digest = hasher.Hash(text);

    std::cout << "Message: " << text << std::endl;
    std::cout << "Digest: " << digest << std::endl;

    return 0;
}