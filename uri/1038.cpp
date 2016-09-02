#include <bits/stdc++.h>
#include <array>

#define PRECISION 2

using namespace std;

array<pair<int, double>, 5> itens;

int main()
{
    cout << fixed << setprecision(PRECISION);

    itens[0] = make_pair(1, 4.0);
    itens[1] = make_pair(2, 4.5);
    itens[2] = make_pair(3, 5.0);
    itens[3] = make_pair(4, 2.0);
    itens[4] = make_pair(5, 1.5);

    int a, b; cin >> a >> b;
    double ammount = 0;

    for (size_t i = 0; i < 5; i++) {
        if (a == itens[i].first) {
            ammount = itens[i].second;
            break;
        }
    }

    cout << "Total: R$ " << ammount*b << endl;

    return 0;
}
