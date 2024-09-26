/*: In a small company there are ﬁve salesmen. Each salesman is supposed to sell three 
products. Write a program using a 2D array to print (i) the total sales by each salesman 
and (ii) total sales of each item.*/
#include <iostream>

using namespace std;

int main() {
    int salesmen = 5, products = 3;
    int sales[5][3], totalSalesman[5] = {0}, totalProduct[3] = {0};
    
    for (int i = 0; i < salesmen; ++i) {
        for (int j = 0; j < products; ++j) {
            cin >> sales[i][j];
            totalSalesman[i] += sales[i][j];
            totalProduct[j] += sales[i][j];
        }
    }

    for (int i = 0; i < salesmen; ++i) {
        cout << "Total sales by Salesman " << i + 1 << ": " << totalSalesman[i] << endl;
    }
    
    for (int j = 0; j < products; ++j) {
        cout << "Total sales of Product " << j + 1 << ": " << totalProduct[j] << endl;
    }

    return 0;
}
