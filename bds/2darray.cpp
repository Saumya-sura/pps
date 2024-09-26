//: In a class, there are six students, each having grades for four subjects. 
// Write a program using a 2D array to calculate (i) the total grades for each student and (ii) the average grade for each subject.

#include <iostream>

using namespace std;

int main() {
    int students = 6, subjects = 4;
    int grades[6][4], total[6] = {0};
    float subjectTotal[4] = {0};

    cout << "Enter the grades for " << students << " students and " << subjects << " subjects:" << endl;

    for (int i = 0; i < students; i++) {
        cout << "Student " << i + 1 << ":" << endl;
        for (int j = 0; j < subjects; j++) {
            cout << "  Subject " << j + 1 << ": ";
            cin >> grades[i][j];
            total[i] += grades[i][j];
            subjectTotal[j] += grades[i][j];
        }
    }

    cout << "\nTotal grades for each student:" << endl;
    for (int i = 0; i < students; i++) {
        cout << "Student " << i + 1 << ": " << total[i] << endl;
    }

    cout << "\nAverage grades for each subject:" << endl;
    for (int j = 0; j < subjects; j++) {
        cout << "Subject " << j + 1 << ": " << subjectTotal[j] / students << endl;
    }

    return 0;
}