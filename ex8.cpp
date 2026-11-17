#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    
    vector<int> marks = {78, 92, 65, 88, 45};

    
    sort(marks.begin(), marks.end());

    cout << "Sorted marks: ";
    for (int m : marks) {
        cout << m << " ";
    }
    cout << endl;

    
    if (find(marks.begin(), marks.end(), 88) != marks.end()) {
        cout << "88 found in marks." << endl;
    }

    
    auto it = find_if(marks.begin(), marks.end(), [](int m) {
        return m >= 90;
    });
    if (it != marks.end()) {
        cout << "First mark >= 90: " << *it << endl;
    }

    vector<int> bonusMarks(marks.size());
    transform(marks.begin(), marks.end(), bonusMarks.begin(), [](int m) {
        return m + 5;
    });

    cout << "Marks after adding 5 bonus marks: ";
    for (int m : bonusMarks) {
        cout << m << " ";
    }
    cout << endl << endl;

    
    map<string, int> studentMarks = {
        {"Amit", 78},
        {"Riya", 92},
        {"Neha", 65},
        {"Raj", 88},
        {"Sam", 45}
    };

    cout << "Student marks (map):" << endl;
    for (const auto& entry : studentMarks) {
        cout << entry.first << ": " << entry.second << endl;
    }
    cout << endl;

    
    unordered_map<int, string> rollMap;
    rollMap[1] = "Amit";
    rollMap[2] = "Riya";
    rollMap[3] = "Neha";

    cout << "Roll number and name (unordered_map):" << endl;
    for (const auto& entry : rollMap) {
        cout << entry.first << ": " << entry.second << endl;
    }

    return 0;
}