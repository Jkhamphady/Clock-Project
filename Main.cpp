/*
    Justin Khamphady
    CS210 Project One - Chada Tech Clocks
    main.cpp - Program Logic
*/

#include <iostream>
#include "Clock.h"
using namespace std;

// Display both clocks in required SNHU format
void displayClocks(const Clock& c) {
    cout << "**************************   **************************\n";
    cout << "*     12-Hour Clock      *   *     24-Hour Clock      *\n";
    cout << "*      " << c.get12HourString() << "       *   *       "
        << c.get24HourString() << "        *\n";
    cout << "**************************   **************************\n";
}

// Display required menu
void displayMenu() {
    cout << "**************************\n";
    cout << "* 1 - Add One Hour       *\n";
    cout << "* 2 - Add One Minute     *\n";
    cout << "* 3 - Add One Second     *\n";
    cout << "* 4 - Exit Program       *\n";
    cout << "**************************\n";
}

int main() {
    // Start at sample SNHU example: 15:22:01 (3:22:01 PM)
    Clock clock(15, 22, 1);

    int choice = 0;

    while (choice != 4) {
        displayClocks(clock);
        displayMenu();

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            clock.addHour();
            break;
        case 2:
            clock.addMinute();
            break;
        case 3:
            clock.addSecond();
            break;
        case 4:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}


