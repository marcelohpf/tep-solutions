#include <iostream>

using namespace std;

int main()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    if (B <= C) {
        cout << "Valores nao aceitos" << endl;
    } else if (D <= A) {
        cout << "Valores nao aceitos" << endl;
    } else if (C+D <= A+B) {
        cout << "Valores nao aceitos" << endl;
    } else if (C < 0 || D < 0) {
        cout << "Valores nao aceitos" << endl;
    } else if (A%2) {
        cout << "Valores nao aceitos" << endl;
    } else {
        cout << "Valores aceitos" << endl;
    }

    return 0;
}
