#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    double sum = 0;
    for (size_t i = 0; i < 2; i++) {
        double number, units, price;
        cin >> number >> units >> price;
        sum += (units*price);
    }
    printf("VALOR A PAGAR: R$ %.2lf\n",sum);
    return 0;
}
