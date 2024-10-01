#include <iostream>
#include <windows.h>
#include "romb/romb.h"

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a,b,c,d;

    std::cout << "Enter a b c d:\n";
    std::cin >> a >> b >> c >> d;

    Romb romb(a,b,c,d);

    if(romb.isValid()) {
        std::cout << "True\n";
    } else {
        std::cout << "False\n";
    }

    return 0;
}
