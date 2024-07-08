#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double hours, rate, gross, tax, net;
    
    cout << "Enter hours worked: ";
    cin >> hours;
    
    cout << "Enter hourly rate: ";
    cin >> rate;
    
    gross = hours * rate;
    
    tax = 0.15 * gross;
    
    net = gross - tax;
    
    cout << fixed << setprecision(2);
    
    cout << "\nGross Pay: $" << gross << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Net Pay: $" << net << endl;
    
    return 0;
}