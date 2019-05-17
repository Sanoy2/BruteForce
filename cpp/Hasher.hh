#ifndef HASHER_HH
#define HASHER_HH

#include <iostream>
#include <cryptopp/sha.h>

class Hasher
{
    public:
        Hasher();
        std::string Hash(std::string);
};

#endif