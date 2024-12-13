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
    
    //user input of room total
    do {
        cout << "enter the amount of rooms";
        cin >> roomTot;
        if (roomTot < 1) {
            cout << "error, rooms must be 1 or more \n";
        }
    } while (roomTot < 1);

    //user input of paint prices
    do {
        cout << "enter the price of the paint used ($10 or greater per gallon): ";
        cin >> gallonPrice;
        //checks that price is $10 or more
        if (gallonPrice < 10.00) {
            cout << "value must be $10.00 or more\n";
        }
    } while (gallonPrice < 10.00);

    vector<double> squareFootage(roomTot);

    //user input for the square footage of each room
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

    //calls calculations using user inputs 
    double neededGallons = gallonCalc(squareFootageTot);
    double requiredLabor = laborHoursCalc(squareFootageTot);
    double paintPrice = paintPriceCalc(neededGallons, gallonPrice);
    double laborCost = laborCostCalc(requiredLabor);
    double totalCost = totCost(paintPrice, laborCost);

    //display results
    cout << "\nJob Details:" << endl;
    cout << "amount of paint needed in gallons: " << neededGallons << endl;
    cout << "amount of labor hours: " << requiredLabor << endl;
    cout << "cost of Paint: $" << paintPrice << endl;
    cout << "cost of labor: $" << laborCost << endl;
    cout << "grand total cost: $" << totalCost << endl;

    return 0;
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
