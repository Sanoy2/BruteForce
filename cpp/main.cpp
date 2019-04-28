#include <iostream>
// #include "Generator.hh"
#include <cryptopp/cryptlib.h>

#define CRYPTOPP_ENABLE_NAMESPACE_WEAK 1
#include <cryptopp/md5.h>


int main(int argc, char** argv)
{
    using namespace CryptoPP;

    // std::string chars = std::string(argv[1]);
    // int maxLength = strtol(argv[2], NULL, 10);

    // Generator generator(chars, maxLength);
    // generator.Generate();

    // return 0;

    Weak::MD5 hash;	
    std::cout << "Name: " << hash.AlgorithmName() << std::endl;
    std::cout << "Digest size: " << hash.DigestSize() << std::endl;
    std::cout << "Block size: " << hash.BlockSize() << std::endl;
    std::string msg = "Yoda said, Do or do not. There is no try.";
    std::string digest;

    return 0;
}