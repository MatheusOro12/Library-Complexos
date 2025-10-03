# Classe Complexos em C++

Este repositório contém uma implementação da classe **Complexos** em C++, permitindo representar e operar números complexos de forma intuitiva, com suporte a operações aritméticas e métodos matemáticos.

---

## 💡 Funcionalidades

A classe `Complexos` oferece:

- Construtores:
  - `Complexos(double Re, double Im)` — cria um número complexo com parte real e imaginária.
- Métodos:
  - `getRe()` / `getIm()` — obtém parte real e imaginária.
  - `getModulo()` — retorna o módulo do número complexo.
  - `getAngulo()` — retorna o ângulo (em graus) do número complexo.
  - `getConjugado()` — retorna o conjugado do número complexo.
- Operadores sobrecarregados:
  - `+`, `-`, `*`, `/` — operações aritméticas com outros números complexos.
  - `<<` — permite imprimir diretamente no `cout`.

---

## 📝 Exemplo de uso

```cpp
#include "Complexos.hpp"
#include <iostream>

int main() {
    Complexos num1(1, 1);
    Complexos num2(2, 2);

    std::cout << "Num1: " << num1 << std::endl;
    std::cout << "Num2: " << num2 << std::endl;

    std::cout << "Num1 + Num2: " << num1 + num2 << std::endl;
    std::cout << "Num1 - Num2: " << num1 - num2 << std::endl;
    std::cout << "Num1 * Num2: " << num1 * num2 << std::endl;
    std::cout << "Num1 / Num2: " << num1 / num2 << std::endl;

    std::cout << "Modulo de Num1: " << num1.getModulo() << std::endl;
    std::cout << "Angulo de Num1: " << num1.getAngulo() << "°" << std::endl;
    std::cout << "Conjugado de Num1: " << num1.getConjugado() << std::endl;

    return 0;
}
