#include <iostream>
using namespace std;
class Date {
private:
    int day;
    int month;
    int year;
    bool isLeapYear(int y) const {
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }
    bool isValidMonth(int m) const {
        return m >= 1 && m <= 12;
    }
    bool isValidDay(int d, int m, int y) const {
        if (d < 1) return false;
        const int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        if (m == 2 && isLeapYear(y)) {
            return d <= 29;
        }
        return d <= daysInMonth[m - 1];
    }

public:
    Date() : day(1), month(1), year(1900) {}
    Date(int d, int m, int y) : day(d), month(m), year(y) {
        if (!isValidDate(d, m, y)) {
            cout << "Invalid date provided. Setting to default date." << endl;
            day = 1;
            month = 1;
            year = 1900;
        }
    }
    void setDate(int d, int m, int y) {
        if (isValidDate(d, m, y)) {
            day = d;
            month = m;
            year = y;
        } else {
            cout << "Invalid date. Date not set." << endl;
        }
    }
    int getDay() const {
        return day;
    }
    int getMonth() const {
        return month;
    }
    int getYear() const {
        return year;
    }
    bool isValidDate(int d, int m, int y) const {
        return isValidMonth(m) && isValidDay(d, m, y);
    }
    void displayDate() const {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date date1;
    date1.displayDate();
    date1.setDate(15, 8, 2023);
    date1.displayDate();
    date1.setDate(30, 2, 2023);
    date1.displayDate();
    Date date2(29, 2, 2024);
    date2.displayDate();
}

