#include <cmath>
#include <iostream>
#include <conio.h>

/*
    Source by Programiz
    Modified For Learn by RK
    I.D.E : VS2019
*/

using namespace std;

int main() {
    double x = 2.0, y = 3.1, z = 3.0, hasil;
    hasil = fma(x, y, z);
    cout << "fma(x, y, z) = " << hasil << endl;

    long double xLD = 3.4, hasilLD;
    hasilLD = fma(xLD, y, z);
    cout << "fma(xLD, y, z) = " << hasilLD << endl;

    _getch();
    return 0;
}