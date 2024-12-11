#include <iostream>
using namespace std;

int main ()
{
    double f;
    double m;

    cout << "Enter the length in feet: ";
    cin >> f; //read 

    m = f/3.28;
    cout << f << " feet is " << m << " metres.";

    return 0;
}