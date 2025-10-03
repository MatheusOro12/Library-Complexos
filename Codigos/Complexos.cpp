#include "Complexos.hpp"


Complexos::Complexos(double Re, double Im) : Re(Re), Im(Im){
    
}

double Complexos::getAngulo() const{
    double tangente = Im/Re;
    return atan2(Im, Re) * 180 / M_PI;
}

double Complexos::getIm() const{
    return Im;
}

double Complexos::getRe() const{
    return Re;
}

double Complexos::getModulo() const{
    return sqrt(Re*Re + Im*Im);
}

Complexos Complexos::getConjugado() const{
    return Complexos(Re, -Im);
}

Complexos Complexos::operator+(const Complexos& c) const{
    return Complexos(Re + c.Re, Im + c.Im);
}

Complexos Complexos::operator-(const Complexos& c) const{
    return Complexos(Re - c.Re, Im - c.Im);
}

Complexos Complexos::operator*(const Complexos& c) const{
    return Complexos(Re*c.Re - Im*c.Im, Re*c.Im + Im*c.Re);
}

Complexos Complexos::operator/(const Complexos& c) const{
    double denom = c.Re*c.Re + c.Im*c.Im;
    Complexos numer = (*this) * c.getConjugado();
    return Complexos(numer.Re/denom, numer.Im/denom);
}


bool Complexos::operator==(const Complexos& c ) const{
    return (this->Re == c.Re && this->Im == c.Im);
}

ostream& operator<<(ostream& os, const Complexos& c) {
    os << c.Re << (c.Im < 0 ? "" : "+") << c.Im << "i";
    return os;
}

Complexos operator+(double lhs, const Complexos& rhs){
    return Complexos(lhs + rhs.getRe(), rhs.getIm());
}

Complexos operator-(double lhs, const Complexos& rhs){
    return Complexos(lhs - rhs.getRe(), -rhs.getIm());
}

Complexos operator*(double lhs, const Complexos& rhs){
    return Complexos(lhs * rhs.getRe(), lhs * rhs.getIm());
}

Complexos operator/(double lhs, const Complexos& rhs){
    double denom = rhs.getRe() * rhs.getRe() + rhs.getIm() * rhs.getIm();
    Complexos numer(lhs, 0);
    Complexos res = numer * rhs.getConjugado();
    return Complexos(res.getRe() / denom, res.getIm() / denom);
}

bool operator==(double lhs, const Complexos& rhs){
    return (lhs == rhs.getRe() && rhs.getIm() == 0);
}