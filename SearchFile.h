#pragma once

#include <iostream>
#include <string>
#include <filesystem>

using std::filesystem::recursive_directory_iterator;

class SearchFile
{
private:
    std::string fileName;
    std::string rootDir;
public:
    SearchFile():
        fileName(""), rootDir("/") {}
    SearchFile(const std::string& n, const std::string& r = "/"):
        fileName(n), rootDir(r) {}
    ~SearchFile(){}

    void setFileName(const std::string& n);
    void setRootDir(const std::string& r);
    std::string getFileName()const;
    std::string getRootDir()const;

    std::string search_file() const;
};