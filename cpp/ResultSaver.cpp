#include "ResultSaver.hh"

void ResultSaver::SaveResults(std::string path, std::map<std::string, std::string> passwords)
{
    std::fstream file;
    file.open(path, std::fstream::out);

    std::map<std::string, std::string>::iterator mapIterator; 
    for (mapIterator = passwords.begin(); 
        mapIterator != passwords.end(); 
        ++mapIterator) 
    { 
        file << mapIterator -> first << " ; " << mapIterator -> second << std::endl;
    } 
   
    file.close();
}