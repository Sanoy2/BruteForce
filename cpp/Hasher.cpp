#include "Hasher.hh"

Hasher::Hasher()
{
    std::cout << "Hello from hasher" << std::endl;
}

std::string Hasher::Hash(std::string text)
{
    CryptoPP::SHA256 hash;	
    std::cout << "Name: " << hash.AlgorithmName() << std::endl;
    std::cout << "Digest size: " << hash.DigestSize() << std::endl;
    std::cout << "Block size: " << hash.BlockSize() << std::endl;
    return "nope";
}