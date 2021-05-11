#include <iostream>

#include "Add.h"

Add::Add(){}

void Add::askData(){
    std::cout << "Surename: ";
    std::getline(std::cin, sname);
    std::cout << "Firstname: ";
    std::getline(std::cin, fname);
    std::cout << "Course: ";
    std::getline(std::cin, course);
    std::cout << "Year: ";
    std::getline(std::cin, year);
    finalData = "\n" + sname + " " + fname + " " + course  + " " + year;
}