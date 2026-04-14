#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes, seconds;
    
public:
    Time() : hours(0), minutes(0), seconds(0) {}
    
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}
    
    void get() {
        cout << "Enter Hours: ";
        cin >> hours;
        cout << "Enter Minutes: ";
        cin >> minutes;
        cout << "Enter Seconds: ";
        cin >> seconds;
    }
    
    void display() const {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
    
    Time add(const Time& t) const {
        int totalSeconds = (hours * 3600) + (minutes * 60) + seconds +
                          (t.hours * 3600) + (t.minutes * 60) + t.seconds;
        int newHours = totalSeconds / 3600;
        totalSeconds %= 3600;
        int newMinutes = totalSeconds / 60;
        int newSeconds = totalSeconds % 60;
        return Time(newHours, newMinutes, newSeconds);
    }
};

int main() {
    Time t1, t2, t3;
    
    cout << "Enter Time 1:\n";
    t1.get();
    cout << "Enter Time 2:\n";
    t2.get();
    
    t3 = t1.add(t2);
    
    cout << "Time 1: ";
    t1.display();
    cout << "Time 2: ";
    t2.display();
    cout << "Time 3 (sum): ";
    t3.display();
    
    return 0;
}