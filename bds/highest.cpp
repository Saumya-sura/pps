#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of temperature readings: ";
    cin >> n;

    int temperatures[n];
    cout << "Enter the temperatures:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Temperature " << i + 1 << ": ";
        cin >> temperatures[i];
    }

    int highest = temperatures[0];
    int lowest = temperatures[0];
    int sum = 0;
    int threshold;
    
    cout << "Enter the threshold temperature: ";
    cin >> threshold;

    int countAboveThreshold = 0; 

    for (int i = 0; i < n; i++) {
        if (temperatures[i] > highest) {
            highest = temperatures[i];
        }
        if (temperatures[i] < lowest) {
            lowest = temperatures[i];
        }
        sum += temperatures[i];

        if (temperatures[i] > threshold) {
            countAboveThreshold++;
        }
    }

    double average = sum / (double)n;

    cout << "Highest: " << highest << endl;
    cout << "Lowest: " << lowest << endl;
    cout << "Average: " << average << endl;

    cout << "Days above " << threshold << ": ";
    for (int i = 0; i < n; i++) {
        if (temperatures[i] > threshold) {
            cout << i + 1 << " ";
        }
    }
    cout << endl;

    cout << "Number of temperatures above " << threshold << ": " << countAboveThreshold << endl;

    return 0;
}
