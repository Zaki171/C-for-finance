#include <iostream>
using namespace std;

int main() {
    double f;
    double m;
    int counter;

    counter = 0;

    for (f = 1.0; f <= 100.0; f++){
        m = f/3.28;
        cout << f << " feet is " << m << " metres.\n";

        counter++;
        
        if (counter==25){
            cout << "\n";
            counter = 0;
        }
    }

    return 0;
}