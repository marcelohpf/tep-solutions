#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;


int main()
{
    double km, l;
    cin >> km >> l;

    double consumption = 0;
    consumption = km/l;

    printf("%.3lf km/l\n", consumption);

    return 0;
}
