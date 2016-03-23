#include <iostream>
#include <cmath>

using namespace std;

void cedulas(unsigned int, unsigned int);
void moedas(unsigned int);

int main()
{
    double valor;
    cin >> valor;
    unsigned int parte_inteira = floor(valor);
    unsigned int parte_fracionaria = valor*100 - parte_inteira*100;
    cedulas(parte_inteira, parte_fracionaria);

    return 0;
}

void cedulas(unsigned int parte_inteira, unsigned int parte_fracionaria)
{
    cout << "NOTAS:" << endl;

    unsigned int num_cedulas_100 = 0;
    unsigned int num_cedulas_50 = 0;
    unsigned int num_cedulas_20 = 0;
    unsigned int num_cedulas_10 = 0;
    unsigned int num_cedulas_5 = 0;
    unsigned int num_cedulas_2 = 0;

    while (parte_inteira >= 100) {
        num_cedulas_100++;
        parte_inteira -= 100;
    }

    while (parte_inteira >= 50) {
        num_cedulas_50++;
        parte_inteira -= 50;
    }

    while (parte_inteira >= 20) {
        num_cedulas_20++;
        parte_inteira -= 20;
    }

    while (parte_inteira >= 10) {
        num_cedulas_10++;
        parte_inteira -= 10;
    }

    while (parte_inteira >= 5) {
        num_cedulas_5++;
        parte_inteira -= 5;
    }

    while (parte_inteira >= 2) {
        num_cedulas_2++;
        parte_inteira -= 2;
    }

    cout << num_cedulas_100 << " nota(s) de R$ 100.00" << endl;
    cout << num_cedulas_50 << " nota(s) de R$ 50.00" << endl;
    cout << num_cedulas_20 << " nota(s) de R$ 20.00" << endl;
    cout << num_cedulas_10 << " nota(s) de R$ 10.00" << endl;
    cout << num_cedulas_5 << " nota(s) de R$ 5.00" << endl;
    cout << num_cedulas_2 << " nota(s) de R$ 2.00" << endl;

    if (parte_inteira == 1) {
        parte_fracionaria += 100;
    }

    moedas(parte_fracionaria);

    return ;
}

void moedas(unsigned int parte_fracionaria)
{
    cout << "MOEDAS:" << endl;

    unsigned int num_moedas_100 = 0;
    unsigned int num_moedas_050 = 0;
    unsigned int num_moedas_025 = 0;
    unsigned int num_moedas_010 = 0;
    unsigned int num_moedas_005 = 0;
    unsigned int num_moedas_001 = 0;

    while (parte_fracionaria >= 100) {
        num_moedas_100++;
        parte_fracionaria -= 100;
    }

    while (parte_fracionaria >= 50) {
        num_moedas_050++;
        parte_fracionaria -= 50;
    }

    while (parte_fracionaria >= 25) {
        num_moedas_025++;
        parte_fracionaria -= 25;
    }

    while (parte_fracionaria >= 10) {
        num_moedas_010++;
        parte_fracionaria -= 10;
    }

    while (parte_fracionaria >= 5) {
        num_moedas_005++;
        parte_fracionaria -= 5;
    }

    while (parte_fracionaria >= 1) {
        num_moedas_001++;
        parte_fracionaria -= 1;
    }

    cout << num_moedas_100 << " moeda(s) de R$ 1.00" << endl;
    cout << num_moedas_050 << " moeda(s) de R$ 0.50" << endl;
    cout << num_moedas_025 << " moeda(s) de R$ 0.25" << endl;
    cout << num_moedas_010 << " moeda(s) de R$ 0.10" << endl;
    cout << num_moedas_005 << " moeda(s) de R$ 0.05" << endl;
    cout << num_moedas_001 << " moeda(s) de R$ 0.01" << endl;

    return ;
}
