#include <iostream>

using namespace std;

class Date{
    public:
    int day;
    int month;
    int year;

    // constructor
    Date(int D, int M, int Y){
        day = D;
        year = Y;

        if ((M < 1) || (M > 12)) {
            month = 1;
        } else{
            month = M;
        }
    }

    //setters
    void setDay(int D){
        day = D;
    }

    void setMonth(int M){
        if ((M < 1) || (M > 12)) {
            month = 1;
        } else{
            month = M;
        }
    }

    void setYear(int Y){
        year = Y;
    }

    //getters
    int getDay(){
        return day;
    }

    int getMonth(){
        return month;
    }

    int getYear(){
        return year;
    }

    // Function
    string formatDate(){

        string d = to_string(day);
        string m = to_string(month);
        string y = to_string(year);

        return d + "/" + m + "/" + y;
    }
};

int main() {
    Date d1(19, 1, 2024);
    cout << d1.formatDate() << endl; // should print 19/1/2024
    d1.setDay(17);
    cout << d1.formatDate() << endl; // should print 17/1/2024
    d1.setMonth(5);
    cout << d1.formatDate() << endl; // should print 17/5/2024
    Date d2(29, 13, 2024); // should set month to 1
    cout << d2.formatDate() << endl; // should print 29/1/2024
    return 0;
}