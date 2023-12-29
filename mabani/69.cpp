#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b, c;
    double delta, x1, x2;
    cout << "please Enter a,b,c :";
    cin >> a >> b >> c;
    if (a == 0)
        cout << "It isn't a correct equation!\n";
    else
    {
        delta = b * b - 4 * a * c;
        if (delta < 0)
            cout << " no answer";
        else

            if (delta == 0)
        {
            x1 = -b / (2 * a);
            cout << "equation has one answer, then x1 is :";
            cout << x1;
        }

        else
        {
            delta = sqrt(delta);
            x1 = (-b + delta) / 4 * a;
            x2 = (-b - delta) / 4 * a;
            cout << "x1 is :" << x1 << "\n";
            cout << "x2 is :" << x2 << "\n";
        }
    }
}
