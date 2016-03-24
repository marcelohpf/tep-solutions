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

    vector<double> t_sides;
    for (size_t i = 0; i < 3; i++) {
        double a;
        cin >> a;
        t_sides.push_back(a);
    }

    sort(t_sides.begin(), t_sides.end(), wayToSort);

    double a, b, c;
    a = t_sides.at(0);
    b = t_sides.at(1);
    c = t_sides.at(2);

    double pow_a, pow_b, pow_c;

    pow_a = pow(a,2);
    pow_b = pow(b,2);
    pow_c = pow(c,2);

    if (a >= (b + c)) {
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else {
        if (pow_a == (pow_b + pow_c)) {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        if (pow_a > (pow_b + pow_c)) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if (pow_a < (pow_b + pow_c)) {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if (a == b && a == c && b == c) {
            cout << "TRIANGULO EQUILATERO" << endl;
        }
        else if (a == b || a == c || b == c) {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
    return 0;
}
