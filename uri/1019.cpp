#include <iostream>
#include <cmath>

using namespace std;

void conversao_de_tempo(unsigned int);
unsigned int conversao_hora(unsigned int);
unsigned int conversao_minunto(unsigned int);

int main()
{
    unsigned int segundos;
    cin >> segundos;

    conversao_de_tempo(segundos);

    return 0;
}

void conversao_de_tempo(unsigned int segundos)
{
    unsigned int horas = 0;
    horas = conversao_hora(segundos);
    segundos -= horas*3600;

    unsigned int minutos = 0;
    minutos = conversao_minunto(segundos);
    segundos -= minutos*60;

    cout << horas << ":" << minutos << ":" << segundos << endl;

    return ;
}

unsigned int conversao_hora(unsigned int segundos)
{
    unsigned int horas = 0;
    horas = segundos / 3600;
    return horas;
}

unsigned int conversao_minunto(unsigned int segundos)
{
    unsigned int minutos = 0;
    minutos = segundos / 60;
    return minutos;
}
