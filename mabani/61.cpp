#include <iostream>
#include <iomanip>
using namespace std;
main()
{
    // Floating point numbers
    double pi = 3.14159265;
    cout << fixed << setprecision(4); // fixed format with 2 decimal
    places
            cout
        << pi << endl;
    cout << "|" << setw(8) << pi << "|" << setw(10) << pi << "|" << endl;
    // setw() is not sticky, only apply to the next operation.
    cout << setfill('-');
    cout << "|" << setw(8) << pi << "|" << setw(10) << pi << "|" << endl;
    cout << scientific; // in scientific format with exponent
    61 cout << pi << endl;
    // booleans
    bool done = false;
    cout << done << endl; // print 0 (for false) or 1 (for true)
    cout << boolalpha;    // print true or false
    cout << done << endl;
}
