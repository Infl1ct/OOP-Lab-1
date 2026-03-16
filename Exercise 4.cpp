#include <iostream>
#include <cstdlib>

using namespace std;

class Polynomial{
    private:
    int a;
    int b;
    int c;

    public:
    Polynomial(){
        a = 1;
        b = 1;
        c = 1;
    }

    Polynomial(int A, int B, int C){
        a = A;
        b = B;
        c = C;
    }

    string format(){
        string A = to_string(a);
        string B = to_string(b);
        string C = to_string(c);

        return A + "x^2 + " + B + "x + " + C;
    }

    int eval(int x){
        return ((a*(x*x)) + (b*x) + c);
    }

    Polynomial operator+(const Polynomial& poly) const{
        Polynomial temp;
        temp.a = a + poly.a;
        temp.b = b + poly.b;
        temp.c = c + poly.c;
        return temp;
    }

    int& operator[](int index){
        if (index == 0){
            return a;
        } else if (index == 1){
            return b;
        } else if (index == 2){
            return c;
        } else{
            cout << "Incorrect index" << endl;
            exit(EXIT_FAILURE);
        }
    }

    bool operator==(const Polynomial& poly) const{
        return (a == poly.a) && (b == poly.b) && (c == poly.c);
    }
};

int main() {

    Polynomial p1;
    Polynomial p2(2, 3, 5);

    cout << "p1: " << p1.format() << endl;
    cout << "p2: " << p2.format() << endl;

    cout << "p2 evaluated at x=2: " << p2.eval(2) << endl;

    Polynomial p3 = p1 + p2;
    cout << "p3 (p1 + p2): " << p3.format() << endl;

    cout << "Original p1 coeff 'a': " << p1[0] << endl;
    p1[0] = 10; // Change 'a' to 10 using the reference
    cout << "Modified p1: " << p1.format() << endl;

    if (p1 == p2) {
        cout << "p1 and p2 are equal" << endl;
    } else {
        cout << "p1 and p2 are NOT equal" << endl;
    }

    Polynomial p4 = p1;
    if (p1 == p4) {
        cout << "p1 and p4 are equal" << endl;
    }

    return 0;
}