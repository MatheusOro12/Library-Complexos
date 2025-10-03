#ifndef COMPLEXOS_HPP
#define COMPLEXOS_HPP

#include <cmath>
#include <iostream>
using namespace std;

class Complexos{
    private:
        double Re;
        double Im;
    public:
        Complexos(double Re = 0, double Im = 0);
        
        double getRe() const;
        double getIm() const;
        
        double getAngulo() const;
        double getModulo() const;
        Complexos getConjugado() const;

        Complexos operator+(const Complexos& c) const;
        Complexos operator-(const Complexos& c) const;
        Complexos operator*(const Complexos& c) const;
        Complexos operator/(const Complexos& c) const;

        bool operator==(const Complexos& c) const;

        friend ostream& operator<<(ostream& os, const Complexos& c);
};

Complexos operator+(double lhs, const Complexos& rhs);
Complexos operator-(double lhs, const Complexos& rhs);
Complexos operator*(double lhs, const Complexos& rhs);
Complexos operator/(double lhs, const Complexos& rhs);

#endif