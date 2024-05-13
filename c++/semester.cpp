#include <iostream>
#include <vector>

using namespace std;

int main() {
    int numSemesters;
    cout << "Enter number of semesters: ";
    cin >> numSemesters;

    vector<int> maxMarks(numSemesters, -1); 

    for (int i = 0; i < numSemesters; ++i) {
        int numSubjects;
        cout << "Enter number of subjects in semester " << i + 1 << ": ";
        cin >> numSubjects;

        int maxMark = -1; 

        cout << "Enter marks obtained in semester " << i + 1 << ": ";
        for (int j = 0; j < numSubjects; ++j) {
            int mark;
            cin >> mark;

            if (mark < 0 || mark > 100) {
                cout << "You have entered an invalid mark.\n";
                return 1; // Exiting program with error code 1
            }

            if (mark > maxMark) {
                maxMark = mark;
            }
        }

        maxMarks[i] = maxMark;
    }

    // Output maximum marks for each semester
    for (int i = 0; i < numSemesters; ++i) {
        cout << "Maximum mark in semester " << i + 1 << ": ";
        if (maxMarks[i] != -1) {
            cout << maxMarks[i] << endl;
        } else {
            cout << "No valid marks entered.\n";
        }
    }

    return 0;
}
