#include "Hasher.hh"

Hasher::Hasher()
{}

std::string Hasher::Hash(std::string text)
{
    CryptoPP::SHA256 hash;
    std::string message = text;
    std::string digest;
    
    CryptoPP::StringSource s(message, 
    true, 
    new CryptoPP::HashFilter(
        hash, 
        new CryptoPP::HexEncoder(new CryptoPP::StringSink(digest))));

    return digest;
}