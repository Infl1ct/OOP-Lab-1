#include <iostream>

using namespace std;

class Employee{
    string firstName;
    string lastName;
    double salary;

    public:
    Employee(string FN, string LN, double S){
        firstName = FN;
        lastName = LN;
        if (S >= 0){
            salary = S;
        } else{
            salary = 0.0;
        }
    }

    double yearlySalary(){
        return salary*12;
    }

    void raiseSalary(int percentage){
        salary += (salary/100) * percentage;
    }

    string getName(){
        return firstName + " " + lastName;
    }
};

int main(){

    Employee e1("Altaf", "Hussain", 1000);
    Employee e2("Shahid", "Afridi", 500);

    cout << "Salary of " << e1.getName() << ": $" << e1.yearlySalary() << endl;
    cout << "Salary of " << e2.getName() << ": $" << e2.yearlySalary() << endl;

    e1.raiseSalary(10);
    e2.raiseSalary(10);

    cout << "Salary of " << e1.getName() << ": $" << e1.yearlySalary() << endl;
    cout << "Salary of " << e2.getName() << ": $" << e2.yearlySalary() << endl;

    return 0;
}