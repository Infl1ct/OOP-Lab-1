#include <iostream>
#include <cstdlib>

using namespace std;

class Glass{
    public:
    int LiquidLevel;

    Glass(){
        LiquidLevel = 200;
    }

    void Drink(int milliliters){
        if (milliliters <= LiquidLevel){
            LiquidLevel = LiquidLevel - milliliters;
        } else{
            cout << "You somehow ate the glass. Good Job(?)" << endl;
            exit(EXIT_SUCCESS);
        }
    }

    void Refill(){
        LiquidLevel = 200;
    }

    int LookAtGlass(){
        return LiquidLevel;
    }
};

int main(){

    Glass first;

    first.Drink(69);
    cout << "Currently in glass: " << first.LookAtGlass() << endl;
    first.Drink(120);
    cout << "Currently in glass: " << first.LookAtGlass() << endl;
    first.Refill();
    cout << "Currently in glass: " << first.LookAtGlass() << endl;
    first.Drink(201);
}