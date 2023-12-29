#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int b, c, d, e, g;
    b = a++;
    cout << "a is: " << a << "\n";
    cout << "b is: " << b << "\n\n";
    c = ++a;
    cout << "a is: " << a << "\n";
    cout << "c is: " << c << "\n\n";
    d = a--;
    cout << "a is: " << a << "\n";
    cout << "d is: " << d << "\n\n";
    e = --a;
    cout << "a is: " << a << "\n";
    cout << "e is: " << e << "\n";
}
