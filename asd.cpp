#include <iostream>
#include <string>

using namespace std;

int main(){

    int row, column;
    string temp, temp2;

    cout << "Position row: ";
    getline(cin, temp);
    cout << temp;
    row = stoi(temp);
    temp.clear();
    cout << "1. Surename" << endl;
    cout << "2. Firestname" << endl;
    cout << "3. Course" << endl;
    cout << "4. Year" << endl;
    cout << "Your choice: ";
    getline(cin, temp2);
    cout << temp2;
    column = stoi(temp2);
    cout << column;
    return 0;
}