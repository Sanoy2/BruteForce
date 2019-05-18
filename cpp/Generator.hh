#ifndef GENERATOR_HH
#define GENERATOR_HH

#include <string>
#include <iostream>

class Generator
{
    public:
        void Generate();
        Generator(std::string, int);

    private:
        std::string chars;
        int maxOutputLength;

        void ProduceString(std::string);
};

#endif