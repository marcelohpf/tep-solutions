#include <bits/stdc++.h>
#include <cstdio>

#define PRECISION 1

using namespace std;

int main()
{
    cout.sync_with_stdio(false);
    cin.sync_with_stdio(false);
    cout << fixed << setprecision(PRECISION);

    int hi, mi, hf, mf;
    cin >> hi >> mi >> hf >> mf;

    int horas = 0;
    int minutos = 0;

    horas = hf - hi;
    if (horas <= 0 && mi >= mf) {
        horas += 24;
    }

    minutos = mf - mi;
    if (minutos < 0) {
        minutos += 60;
        horas--;
    }

    fprintf(stdout, "O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);

    return 0;
}
