//
// Created by shain on 01.10.2024.
//

#ifndef ROMB_H
#define ROMB_H


class Romb {
private:
    double a, b, c, d;

public:
    Romb(double angleA, double angleB, double angleC, double angleD);

    bool isValid() const;
};



#endif //ROMB_H
