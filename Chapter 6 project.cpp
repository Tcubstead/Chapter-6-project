// Thomas Cubstead
// 12/11/24
// chapter_6_Project
// 5_Paint_Job_Estimator
// This program will take user input and display the cost of labor for painting a given room


#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

//claculations for all prices and square footage

double gallonCalc(double totalSquareFeet) {
    return ceil(totalSquareFeet / 110.0);
}

double laborHoursCalc(double totalSquareFeet) {
    return totalSquareFeet / 110.0 * 8;
}

double paintPriceCalc(double gallons, double gallonPrice) {
    return gallons * gallonPrice;
}

double laborCostCalc(double hours) {
    return hours * 25;
}

double totCost(double paintPrice, double laborCost) {
    return paintPrice + laborCost;
}

//user input for square footage and a check to make sure its positive
int main() {
    int roomTot;
    double gallonPrice;

    do {
        cout << "enter the amount of rooms";
        cin >> roomTot;
        if (roomTot < 1) {
            cout << "error, rooms must be 1 or more \n";
        }
    } while (roomTot < 1);

    vector<double> squareFootage(roomTot);

    double squareFootageTot = 0;
    for (int i = 0; i < roomTot; i++) {
        do {
            cout << "Enter the total square footage of the room " << i + 1 << ": ";
            cin >> squareFootage[i];
            if (squareFootage[i] < 0) {
                cout << "square footage must be positive\n";
            }
        } while (squareFootage[i] < 0);
        squareFootageTot += squareFootage[i];
    }


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
