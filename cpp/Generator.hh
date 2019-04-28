#ifndef GENERATOR_H
#define GENERATOR_H

#include <string>

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