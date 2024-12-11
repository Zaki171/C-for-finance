#include <iostream>
#include <cmath> // For pow()

using namespace std;

int main() {
    double ytm;             // Yield to maturity
    double T;               // Time to maturity
    int t;                  // Current time step in loop
    double cashflows = 0;   // Total cashflows
    double coupon_rate;     // Coupon rate
    double principal_amt;   // Principal amount
    double coup_cf;         // Individual coupon cashflow

    cout << "Enter yield to maturity (ytm): ";
    cin >> ytm;

    cout << "Enter time to maturity (T): ";
    cin >> T;

    cout << "Enter coupon rate: ";
    cin >> coupon_rate;

    cout << "Enter principal amount: ";
    cin >> principal_amt;

    for (t = 1; t <= T; t++) {
        coup_cf = (coupon_rate*principal_amt) / pow(1 + ytm, t);
        cashflows += coup_cf;
        if (t == T) {
            cashflows += principal_amt / pow(1 + ytm, t);
        }
    }

    cout << "Bond price: " << cashflows;

    return 0;
}