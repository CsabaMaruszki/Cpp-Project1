#include <string>
#include <iostream>

#include "FileName.h"

FileName::FileName(){
}

void FileName::askFileName(){
    std::cout << std::endl << "Database file name: ";
    std::getline(std::cin, filename);
    filename += ".txt";
}