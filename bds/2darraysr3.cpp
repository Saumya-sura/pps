/* 
An industrial plant tracks the energy consumption of five machines across four different shifts.
 Write a program using a 2D array to find (i) the total energy consumption for each machine and (ii) the total energy consumption for each shift.
*/

#include <iostream>

using namespace std;

int main() {
    int machines = 5, shifts = 4;
    int energy[5][4], totalMachine[5] = {0}, totalShift[4] = {0};
    
    cout << "Enter the energy consumption for each machine across each shift:\n";
    
    for (int i = 0; i < machines; ++i) {
        for (int j = 0; j < shifts; ++j) {
            cin >> energy[i][j];
            totalMachine[i] += energy[i][j];
            totalShift[j] += energy[i][j];
        }
    }

    cout << "\nTotal energy consumption for each machine:\n";
    for (int i = 0; i < machines; ++i) {
        cout << "Machine " << i + 1 << ": " << totalMachine[i] << endl;
    }  
    cout << "\nTotal energy consumption for each shift:\n";
    for (int j = 0; j < shifts; ++j) {
        cout << "Shift " << j + 1 << ": " << totalShift[j] << endl;
    }
    return 0;
}