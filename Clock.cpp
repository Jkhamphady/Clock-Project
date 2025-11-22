/*
    Justin Khamphady
    CS210 Project One - Chada Tech Clocks
    Clock.cpp - Class Implementation
*/

#include "Clock.h"
#include <iomanip>
#include <sstream>

// Constructor
Clock::Clock(int h, int m, int s) {
    hour = h;
    minute = m;
    second = s;
}

// Add 1 hour with rollover
void Clock::addHour() {
    hour++;
    if (hour >= 24) {
        hour = 0;
    }
}

// Add 1 minute with rollover
void Clock::addMinute() {
    minute++;
    if (minute >= 60) {
        minute = 0;
        addHour();
    }
}

// Add 1 second with rollover
void Clock::addSecond() {
    second++;
    if (second >= 60) {
        second = 0;
        addMinute();
    }
}

// Converts to 12-hour format
int Clock::getHour12() const {
    int h = hour % 12;
    return (h == 0 ? 12 : h);
}

// AM/PM label
string Clock::getAMPM() const {
    return (hour >= 12 ? "PM" : "AM");
}

// Display in 24-hour format
string Clock::get24HourString() const {
    ostringstream out;
    out << setw(2) << setfill('0') << hour << ":"
        << setw(2) << setfill('0') << minute << ":"
        << setw(2) << setfill('0') << second;
    return out.str();
}

// Display in 12-hour format
string Clock::get12HourString() const {
    ostringstream out;
    out << setw(2) << setfill('0') << getHour12() << ":"
        << setw(2) << setfill('0') << minute << ":"
        << setw(2) << setfill('0') << second
        << " " << getAMPM();
    return out.str();
}

