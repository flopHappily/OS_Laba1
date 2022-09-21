#include <iostream>
#include "Number.h"
#include "Vector.h"

int main()
{
    Number a = Create(7);
    Number b = Create(6);
    Number c = a + b;
    Number d = b - a;
    Number e = a * b;
    Number f = a / b;
    Vector vec(Number(3), Number(4));
    Vector vec2(Number(-3), Number(0.45));
    Vector vec3 = vec + vec2;
    std::cout << c << '\n' << d << '\n' << e << '\n' << f << '\n';
    std::cout << vec << "  Polar: " << vec.polarR() << ";" << vec.polarF() << std::endl;
    std::cout << vec2 << "  Polar: " << vec2.polarR() << ";" << vec2.polarF() << std::endl;
    std::cout << "vec1 + vec2 : " << vec3;

}