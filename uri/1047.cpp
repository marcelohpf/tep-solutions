#include <bits/stdc++.h>
#include <cstdio>

#define PRECISION 1

using namespace std;

bool wayToSort(int i, int j) { return i > j; }

int main()
{
    cout.sync_with_stdio(false);
    cin.sync_with_stdio(false);
    cout << fixed << setprecision(PRECISION);

    int a, b, c, d; cin >> a >> b >> c >> d;

    int horas = 0;
    int minutos = 0;

    horas = c - a;
    if (horas <= 0) {
        horas += 24;
    }

    minutos = d - b;
    if (minutos < 0) {
        minutos += 60;
        horas--;
    }

    fprintf(stdout, "O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);

    return 0;
}
