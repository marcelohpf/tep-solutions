#include <iostream>
#include <cmath>

using namespace std;

void cedulas(unsigned int);
unsigned int cedulas_100(unsigned int);
unsigned int cedulas_50(unsigned int);
unsigned int cedulas_20(unsigned int);
unsigned int cedulas_10(unsigned int);
unsigned int cedulas_5(unsigned int);
unsigned int cedulas_2(unsigned int);
unsigned int cedulas_1(unsigned int);

int main()
{
    unsigned int valor;
    cin >> valor;

    cedulas(valor);

    return 0;
}

void cedulas(unsigned int valor)
{
    cout << valor << endl;

    unsigned int num_cedulas_100 = 0;
    num_cedulas_100 = cedulas_100(valor);
    valor -= num_cedulas_100*100;
    cout << num_cedulas_100 << " nota(s) de R$ 100,00" << endl;

    unsigned int num_cedulas_50 = 0;
    num_cedulas_50 = cedulas_50(valor);
    valor -= num_cedulas_50*50;
    cout << num_cedulas_50 << " nota(s) de R$ 50,00" << endl;

    unsigned int num_cedulas_20 = 0;
    num_cedulas_20 = cedulas_20(valor);
    valor -= num_cedulas_20*20;
    cout << num_cedulas_20 << " nota(s) de R$ 20,00" << endl;

    unsigned int num_cedulas_10 = 0;
    num_cedulas_10 = cedulas_10(valor);
    valor -= num_cedulas_10*10;
    cout << num_cedulas_10 << " nota(s) de R$ 10,00" << endl;

    unsigned int num_cedulas_5 = 0;
    num_cedulas_5 = cedulas_5(valor);
    valor -= num_cedulas_5*5;
    cout << num_cedulas_5 << " nota(s) de R$ 5,00" << endl;

    unsigned int num_cedulas_2 = 0;
    num_cedulas_2 = cedulas_2(valor);
    valor -= num_cedulas_2*2;
    cout << num_cedulas_2 << " nota(s) de R$ 2,00" << endl;

    unsigned int num_cedulas_1 = 0;
    num_cedulas_1 = cedulas_1(valor);
    valor -= num_cedulas_1*1;
    cout << num_cedulas_1 << " nota(s) de R$ 1,00" << endl;

    if (valor != 0) {
        cerr << "Algo deu errado! (valor != 0)" << endl;
        cerr << "Valor: " << valor << endl;
    }

    return ;
}

unsigned int cedulas_100(unsigned int valor)
{
    unsigned num_cedulas_100 = 0;
    while (valor >= 100) {
        num_cedulas_100++;
        valor -= 100;
    }
    return num_cedulas_100;
}

unsigned int cedulas_50(unsigned int valor)
{
    unsigned num_cedulas_50 = 0;
    while (valor >= 50) {
        num_cedulas_50++;
        valor -= 50;
    }
    return num_cedulas_50;
}

unsigned int cedulas_20(unsigned int valor)
{
    unsigned num_cedulas_20 = 0;
    while (valor >= 20) {
        num_cedulas_20++;
        valor -= 20;
    }
    return num_cedulas_20;
}

unsigned int cedulas_10(unsigned int valor)
{
    unsigned num_cedulas_10 = 0;
    while (valor >= 10) {
        num_cedulas_10++;
        valor -= 10;
    }
    return num_cedulas_10;
}

unsigned int cedulas_5(unsigned int valor)
{
    unsigned num_cedulas_5 = 0;
    while (valor >= 5) {
        num_cedulas_5++;
        valor -= 5;
    }
    return num_cedulas_5;
}

unsigned int cedulas_2(unsigned int valor)
{
    unsigned num_cedulas_2 = 0;
    while (valor >= 2) {
        num_cedulas_2++;
        valor -= 2;
    }
    return num_cedulas_2;
}

unsigned int cedulas_1(unsigned int valor)
{
    unsigned num_cedulas_1 = 0;
    num_cedulas_1 = valor;
    return num_cedulas_1;
}
