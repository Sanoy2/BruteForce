#ifndef RESULTSAVER_HH
#define RESULTSAVER_HH

#include <string>
#include <map>
#include <fstream>

class ResultSaver
{
    public:
        void SaveResults(std::string, std::map<std::string, std::string>);
};

#endif