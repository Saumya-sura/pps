#include <iostream>
using namespace std;

int main() {
    int N, D;
    cout << "Enter the number of people (N): ";
    cin >> N;
    cout << "Enter the maximum number of people that can be vaccinated per day (D): ";
    cin >> D;
    int Risk = 0;
    int noRisk = 0;
    int age;
    
    cout << "Enter the ages of the people: ";
    for(int i = 0; i < N; ++i) {
        cin >> age;
        if(age >= 80 || age <= 9) {
            ++Risk;
        } else {
            ++noRisk;
        }
   }
    int daysForAtRisk = (Risk + D - 1) / D; 
    int daysForNotAtRisk = (noRisk + D - 1) / D; 
    
    int totalDays = daysForAtRisk + daysForNotAtRisk;
    
    cout << "The smallest number of days needed to vaccinate everyone: " << totalDays << endl;
    
    return 0;
}
