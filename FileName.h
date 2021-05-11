#pragma once
#ifndef FILENAME_H
#define FILENAME_H

#include <string>

class FileName{
private:
    std::string filename;
public:
    FileName();
    void askFileName();
    std::string getFileName(){return filename;}
};

#endif