#include <iostream>
#include <iomanip>
#include <cmath>

#define PRECISION 3

using namespace std;

const unsigned int autonomia = 12;
double gasto_de_combustivel(unsigned int, unsigned int);

int main()
{
    cout << fixed << setprecision(PRECISION);

    unsigned int tempo, velocidade_media;
    cin >> tempo >> velocidade_media;

    cout << gasto_de_combustivel(tempo, velocidade_media) << endl;

    return 0;
}

double gasto_de_combustivel(unsigned int tempo, unsigned int velocidade_media)
{
    double gasto = 0;
    double distancia = tempo*velocidade_media;
    gasto = distancia/autonomia;
    clog << "tempo: " << tempo << endl;
    clog << "velocidade_media: " << velocidade_media << endl;
    clog << "distancia: " << distancia << endl;
    clog << "autonomia: " << autonomia << endl;
    clog << "gasto: " << gasto << endl;
    return gasto;
}
