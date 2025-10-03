#include "Complexos.hpp"

int main(){
    Complexos num1(1, 1);
    Complexos num2(2, 2);
    Complexos num3(2, 2);
    Complexos num4(7, 2);

    cout << "Funcoes de complexos: " << endl;
    cout << "Num1 angulo: " << num1.getAngulo() << endl;
    cout << "Num1 real: " << num1.getRe() << endl;
    cout << "Num1 imaginario: " << num1.getIm() << endl;
    cout << "Num1 conjugado: " << num1.getConjugado() << endl;
    cout << "Num1 modulo: " << num1.getModulo() << endl;

    cout << "Num2 angulo: " << num2.getAngulo() << endl;
    cout << "Num2 real: " << num2.getRe() << endl;
    cout << "Num2 imaginario: " << num2.getIm() << endl;
    cout << "Num2 conjugado: " << num2.getConjugado() << endl;
    cout << "Num2 modulo: " << num2.getModulo() << endl;
    
    cout << endl << "Operacao entre complexos: " << endl;
    cout << "Num1 + num2: " << num1 + num2 << endl;
    cout << "Num1 - num2: " << num1 - num2 << endl;
    cout << "Num1 * num2: " << num1 * num2 << endl;
    cout << "Num1 / num2: " << num1 / num2 << endl;

    cout << endl << "Operacao complexos e real: " << endl;
    cout << "Num1 + 5 " << num1 + 5 << endl;
    cout << "Num1 - 5 " << num1 - 5 << endl;
    cout << "Num1 * 5 " << num1 * 5 << endl;
    cout << "Num1 / 5 " << num1 / 5 << endl;

    cout << endl << "Operacao real e complexos: " << endl;
    cout << "5 + num1 " << 5 + num1 << endl;
    cout << "5 - num1 " << 5 - num1 << endl;
    cout << "5 * num1 " << 5 * num1 << endl;
    cout << "5 / num1 " << 5 / num1 << endl;
    if(num2 == num3)
        cout << "num2 == num3" << endl;
    else 
        cout << "num2 != num3" << endl;

    if (5 == (num4-num3))
        cout << "5 == num4-num3" << endl;
    else 
        cout << "5 != num4-num3" << endl;
    
    if (num4-num3 == 5)
        cout << "num4-num3 == 5" << endl;
    else 
        cout << "num4-num3 != 5" << endl;
}