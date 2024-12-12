// Thomas Cubstead
// 12/11/24
// chapter_6_Project
// 2_Safest_Driving_Area
// This program determines which region of a city has the most car crashes based on user input


#include <iostream>
#include <string>
using namespace std;

//function to locate region with the safest driving history based on accidents
void safestDrivingRegion(int accidents[], string regions[], int size) {
    //variables for number of accidents and regions
    int lowestAccidentHistory = accidents[0];
    string regionWithLeast = regions[0];

    //loop to sort through info and find which region had the least accidnets
    for (int i = 1; i < size; ++i) {
        if (accidents[i] < lowestAccidentHistory) {
            lowestAccidentHistory = accidents[i];
            regionWithLeast = regions[i];
        }
    }
    //display results of safest region
    cout << "The region with the safest drivers in the last year is: " 
        << regionWithLeast << " which has had " << lowestAccidentHistory 
        << " automobile accidents in the last year." << endl;
}

int main() {
    //define regions
    string regions[5] = {"North", "South", "East", "West", "central"};

    int accidents[5];

    //user input for the accidents in each region
    for (int i = 0; i < 5; ++i) {
        do {
            cout << "enter the number of accidents in the " << regions[i] << " within the last year" << endl;
            cin >> accidents[i];

            if (accidents[i] < 0) {
                cout << "error accidents can not be less than 0" << endl;
            }
        } while (accidents[i] < 0);
    }
    safestDrivingRegion(accidents, regions, 5);
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
