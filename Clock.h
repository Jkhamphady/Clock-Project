/*
    Justin Khamphady
    CS210 Project One - Chada Tech Clocks
    Clock.h - Class Declaration
*/

#ifndef CLOCK_H
#define CLOCK_H

#include <string>
using namespace std;

class Clock {
private:
    int hour;      // 0–23
    int minute;    // 0–59
    int second;    // 0–59

public:
    // Constructor
    Clock(int h = 0, int m = 0, int s = 0);

    // Increment functions
    void addHour();
    void addMinute();
    void addSecond();

    // 12-hour format conversions
    int getHour12() const;
    string getAMPM() const;

    // String representations
    string get24HourString() const;
    string get12HourString() const;
};

#endif