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

    double salary; cin >> salary;
    double tax = 0;

    if (salary > 2000) {
        if (salary > 3000) {
            tax += 1000*0.08;

            if (salary > 4500) {
                tax += 1500*0.18;
                tax += (salary - 4500)*0.28;
            }
            else {
                tax += (salary - 3000)*0.18;
            }
        }
        else {
            tax += (salary - 2000)*0.08;
        }
        printf("R$ %.2lf\n", tax);
    }
    else {
        printf("Isento\n");
    }

    return 0;
}
