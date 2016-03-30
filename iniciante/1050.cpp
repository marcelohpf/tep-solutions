#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>

#define PRECISION 2

using namespace std;

int main()
{
    cout.sync_with_stdio(false);
    cin.sync_with_stdio(false);
    cout << fixed << setprecision(PRECISION);

    unsigned int a; cin >> a;

    char destination[30];

    switch (a) {

        case 61:
        strcpy(destination,"Brasilia");
        break;

        case 71:
        strcpy(destination,"Salvador");
        break;

        case 11:
        strcpy(destination,"Sao Paulo");
        break;

        case 21:
        strcpy(destination,"Rio de Janeiro");
        break;

        case 32:
        strcpy(destination,"Juiz de Fora");
        break;

        case 19:
        strcpy(destination,"Campinas");
        break;

        case 27:
        strcpy(destination,"Vitoria");
        break;

        case 31:
        strcpy(destination,"Belo Horizonte");
        break;

        default:
        strcpy(destination,"DDD nao cadastrado");
        break;
    }


    printf("%s\n", destination);

    return 0;
}
