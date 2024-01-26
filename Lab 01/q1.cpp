#include <iostream>

using namespace std;

int main() {
    // Declaring variables to store day, month, and year
    int day, month, year;

    // Prompt the user to enter values for day, month, and year
    cout << "Enter the day: ";
    cin >> day;

    cout << "Enter the month: ";
    cin >> month;

    cout << "Enter the year: ";
    cin >> year;

    // Printing the values entered by the user
    cout << "You entered: " << day << "/" << month << "/" << year << endl;

    return 0;
}
