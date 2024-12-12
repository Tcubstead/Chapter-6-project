// Thomas Cubstead
// 12/11/24
// chapter_6_Project
// 1_Rectangle_Properties
// This program takes user input of length and width of a rectangle and displays the area and perimeter then loops until the user ends the program


#include <iostream>
using namespace std;

//calculations for perimeter and area
double perimeterCalc(double length, double width) {
    return 2 * (length + width);
}

double areaCalc(double length, double width) {
    return length * width;
}

//repeating message that displays the [erimeter and area
void displayRectangle(double perimeter, double area) {
    cout << "The perimeter of the rectangle is: " << perimeter << endl;
    cout << "The area of the rectangle is:" << area << endl;
}
int main() {
    //variables for user input
    double length, width, area, perimeter;
    char repeat;

    //user input to get length and width
    do {
        cout << "enter the length of the rectangle" << endl;
        cin >> length;
        cout << "enter the width of the rectangle" << endl;
        cin >> width;

        //calculations
        perimeter = perimeterCalc(length, width);
        area = areaCalc(length, width);

        //displays results
        displayRectangle(perimeter, area);

        //loops program until the user ends it
        cout << "Would you like to enter another rectangle (y/n)" << endl;
        cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');
    cout << "Ending program" << endl;
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
