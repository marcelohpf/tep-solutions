#include <iostream>
#include <cstdio>
#include <cmath>

#define pi 3.14159

using namespace std;

void triangulo(double, double);
void circulo(double);
void trapezio(double, double, double);
void quadrado(double);
void retangulo(double, double);

int main()
{
    double side_a, side_b, side_c;
    cin >> side_a >> side_b >> side_c;

    triangulo(side_a, side_c);
    circulo(side_c);
    trapezio(side_a, side_b, side_c);
    quadrado(side_b);
    retangulo(side_a, side_b);

    return 0;
}

void triangulo(double side_a, double side_c)
{
    double area = 0.0;
    area = (side_a * side_c)/2;
    printf("TRIANGULO: %.3lf\n", area);

    return ;
}
void circulo(double side_c)
{
    double area = 0.0;
    area = pow(side_c,2)*pi;
    printf("CIRCULO: %.3lf\n", area);

    return ;
}
void trapezio(double side_a, double side_b, double side_c)
{
    double area = 0.0;
    area = (side_a+side_b)*side_c/2;
    printf("TRAPEZIO: %.3lf\n", area);

    return ;
}
void quadrado(double side_b)
{
    double area = 0.0;
    area = pow(side_b,2);
    printf("QUADRADO: %.3lf\n", area);

    return ;
}
void retangulo(double side_a, double side_b)
{
    double area = 0.0;
    area = side_a*side_b;
    printf("RETANGULO: %.3lf\n", area);

    return ;
}
