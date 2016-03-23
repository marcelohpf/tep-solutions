#include <iostream>
#include <cmath>

using namespace std;

void idade_em_dias(unsigned int);
unsigned int conversao_ano(unsigned int);
unsigned int conversao_mes(unsigned int);

int main()
{
    unsigned int dias;
    cin >> dias;

    idade_em_dias(dias);

    return 0;
}

void idade_em_dias(unsigned int dias)
{
    unsigned int anos = 0;
    anos = conversao_ano(dias);
    dias -= anos*365;

    unsigned int mes = 0;
    mes = conversao_mes(dias);
    dias -= mes*30;

    cout << anos << " ano(s)" << endl;
    cout << mes << " mes(es)" << endl;
    cout << dias << " dia(s)" << endl;

    return ;
}

unsigned int conversao_ano(unsigned int dias)
{
    unsigned int anos = 0;
    anos = dias / 365;
    return anos;
}

unsigned int conversao_mes(unsigned int dias)
{
    unsigned int meses = 0;
    meses = dias / 30;
    return meses;
}
