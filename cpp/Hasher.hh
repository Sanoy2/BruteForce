#ifndef HASHER_HH
#define HASHER_HH

#include <iostream>
#include <cryptopp/sha.h>
#include <cryptopp/cryptlib.h>
#include <cryptopp/hex.h>
#include <cryptopp/files.h>

class Hasher
{
    public:
        Hasher();
        std::string Hash(std::string);
};

#endif