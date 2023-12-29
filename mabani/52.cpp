#include <iostream>
using namespace std;

int main()
{
    int number1;
    int number2;
    cout << "Enter two integers to compare: ";
    cin >> number1 >> number2;
    if (number1 == number2)
        cout << number1 << " == " << number2 << "\n";
    if (number1 != number2)
        cout << number1 << " != " << number2 << "\n";
    if (number1 < number2)
        cout << number1 << " < " << number2 << "\n";
    if (number1 > number2)
        cout << number1 << " > " << number2 << "\n";
    if (number1 <= number2)
        cout << number1 << " <= " << number2 << "\n";
    if (number1 >= number2)
        cout << number1 << " >= " << number2 << "\n";
    return 0;
}
