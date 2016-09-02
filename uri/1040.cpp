#include <bits/stdc++.h>
#include <array>

#define PRECISION 1

using namespace std;

int main()
{
    cout << fixed << setprecision(PRECISION);

    double a, b, c, d; cin >> a >> b >> c >> d;
    double media = (2*a + 3*b + 4*c + 1*d)/10;

    cout << "Media: " << media << endl;
    if (media >= 7) {
        cout << "Aluno aprovado." << endl;
    }
    else if (media >= 5) {
        cout << "Aluno em exame." << endl;
        double exame; cin >> exame;
        cout << "Nota do exame: " << exame << endl;

        if ((media+exame)/2 < 5) {
            cout << "Aluno reprovado." << endl;
            cout << "Media final: " << (media+exame)/2 << endl;
        }
        else {
            cout << "Aluno aprovado." << endl;
            cout << "Media final: " << (media+exame)/2 << endl;
        }
    } else {
        cout << "Aluno reprovado." << endl;
    }
//    cerr << "a: " << a << "\tb: " << b << "\tc: " << c << "\td: " << d << "\nmedia: " << media << endl;

    return 0;
}
