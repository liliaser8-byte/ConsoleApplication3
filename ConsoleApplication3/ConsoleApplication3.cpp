#include <iostream>
#include <cmath> 
#include <windows.h> 
using namespace std;

int main() {
    double a, b, c;
    //Введіть сторони трикутника
    cout << "Введіть сторони трикутника a, b, c: ";
    cin >> a >> b >> c;

    double p = (a + b + c) / 2.0;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));
    double r = S / p;

    cout << "Радіус вписаного кола: " << r << endl;

    return 0;
}