// Thomas Cubstead
// 12/11/24
// chapter_6_Project
// 3_Celcius_Temp_Table
// this program shows the temperature conversions between 0-20 degrees for farenheit and celcius


#include <iostream>
#include <iomanip>
using namespace std;

//conversion from farenheit to celcius
double conversion(int farenheit) {
    return 5.0 / 9.0 * (farenheit - 32);
}

//function for the conversion table
void displayTable() {
    cout << "Farenheit/Celcius" << endl;
    cout << "______________________" << endl;

    for (int farenheit = 0; farenheit <= 20; ++farenheit) {
        double celcius = conversion(farenheit);
        cout << farenheit << "\t\t" << fixed << setprecision(2) << celcius << endl;
    }
}

//displays table
int main() {
    displayTable();

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
