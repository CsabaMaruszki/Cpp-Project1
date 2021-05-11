#include <iostream>
#include <iomanip>

#include "ModifyRecord.h"
#include "ReadFromFile.h"
#include "Overwrite.h"

using namespace std;

ModifyRecord::ModifyRecord(){}

void ModifyRecord::askPosition(string fname){
    filename = fname;
    cout << "Position row: ";
    getline(cin, temp);
    row = stoi(temp);
    cout << "1. Surename" << endl;
    cout << "2. Firestname" << endl;
    cout << "3. Course" << endl;
    cout << "4. Year" << endl;
    cout << "Your choice: ";
    getline(cin, temp2);
    column = stoi(temp2);
    ModifyRecord::splitString();
}

void ModifyRecord::splitString(){
    ReadFromFile rf;

    rf.readChosenLine(filename,row);
    textToReplace = rf.getChosenLine();
    istringstream iss(rf.getChosenLine());
        for (string s; iss >> s;)
        {
            splitTextV.push_back(s);
        }
    replaceData();
}

void ModifyRecord::replaceData(){
    Overwrite over(filename);
    switch (column){
    case 1:
        cout << "New surename: ";
        getline(cin, temp);
        splitTextV[column-1] = temp;
        backToString();
        over.replaceFile(splitTextStr, row);
        break;

    case 2:
        cout << "New firstname: ";
        getline(cin, temp);
        splitTextV[column-1] = temp;
        backToString();
        over.replaceFile(splitTextStr, row);
        break;
    
    case 3:
        cout << "New course: ";
        getline(cin, temp);
        splitTextV[column-1] = temp;
        backToString();
        over.replaceFile(splitTextStr, row);
        break;
    
    case 4:
        cout << "New year: ";
        getline(cin, temp);
        splitTextV[column-1] = temp;
        backToString();
        over.replaceFile(splitTextStr, row);
        break;
    }
}

void ModifyRecord::backToString(){
    for (auto &s : splitTextV)
        {
            splitTextStr += s + " ";
        }
    splitTextStr += '\n';
}