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

    int a, b; cin >> a >> b;

    int horas = 0;

    if (a == b) {
        horas = 24;
    }
    else if (a > b) {
        horas = 24 - a + b;
    }
    else {
        horas = b - a;
    }


    fprintf(stdout, "O JOGO DUROU %d HORA(S)\n", horas);

    return 0;
}
