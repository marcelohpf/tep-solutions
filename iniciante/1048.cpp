#include <bits/stdc++.h>
#include <cstdio>

#define PRECISION 2

using namespace std;

bool wayToSort(int i, int j) { return i > j; }

int main()
{
    cout.sync_with_stdio(false);
    cin.sync_with_stdio(false);
    cout << fixed << setprecision(PRECISION);

    double a; cin >> a;
    double percent, new_salary;

    if (a > 400) {
        if (a > 800) {
            if (a > 1200) {
                if (a > 2000) {
                    percent = 0.04;
                }
                else {
                    percent = 0.07;
                }
            }
            else {
                percent = 0.1;
            }
        }
        else {
            percent = 0.12;
        }
    }
    else {
        percent = 0.15;
    }

    new_salary = a*(1+percent);

    cout << "Novo salario: " << new_salary << endl;
    cout << "Reajuste ganho: " << new_salary - a << endl;
    cout << fixed << setprecision(0);
    cout << "Em percentual: " << percent*100 << " %" << endl;

    return 0;
}
