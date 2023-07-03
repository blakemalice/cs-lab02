#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    double a, b;
    cin >> a >> b;
    a / b;
    a % b;
    cout << "A + B = " << a + b << '\n'
    << "A - B = " << a - b << '\n'
    << "A * B = " << a * b << '\n'
    << "A / B = " << a / b << '\n';
    if (a < b)
        cout << "max: "<< b;
    if (b < a)
        cout << "max: "<< a;
    if (a < b)
        cout << "min: "<< a;
    if (b < a)
        cout << "min: "<< b;

}
