#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    fstream file;

   
    file.open("students.csv", ios::out | ios::in | ios::trunc);

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

   
    file << "RollNo,Name,Marks\n";
    
    
    streampos writePos = file.tellp();
    cout << "Put pointer position before writing record (tellp): " << writePos << endl;

    file << "1,Amaan,90\n";

   
    file.seekp(0, ios::end);
    cout << "Put pointer position at end of file (tellp): " << file.tellp() << endl;

    
    file.seekg(0, ios::beg);
    cout << "Get pointer position at start of file (tellg): " << file.tellg() << endl;

    cout << "\n--- Contents of students.csv ---" << endl;
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
    return 0;
}