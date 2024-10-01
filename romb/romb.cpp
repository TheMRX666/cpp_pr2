//
// Created by shain on 01.10.2024.
//

#include "romb.h"


Romb::Romb(double angleA, double angleB, double angleC, double angleD)
    : a(angleA), b(angleB), c(angleC), d(angleD) {}

bool Romb::isValid() const {
    if (a == c && b == d && (a + b == 180)) {
        return true;
    }
    return false;
}
