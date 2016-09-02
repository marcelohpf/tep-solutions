#include <iostream>
#include <iomanip>
#include <cmath>

#define PRECISION 5

using namespace std;

double calcula_delta(double, double, double);
void calcula_bhaskara(double, double, double, double);

int main()
{
    cout << fixed << setprecision(PRECISION);

    double a, b, c;
    cin >> a >> b >> c;

    double delta = 0;
    delta = calcula_delta(a,b,c);

    if (a == 0) {
        cout << "Impossivel calcular" << endl;
    } else  if (delta < 0) {
        cout << "Impossivel calcular" << endl;
    } else {
        calcula_bhaskara(a,b,c,delta);
    }

    return 0;
}


double calcula_delta(double a, double b, double c)
{
    return pow(b,2)-(4*a*c);
}

void calcula_bhaskara(double a, double b, double c, double delta)
{
    double bhaskara = 0;

    bhaskara = ((-1*b)+sqrt(delta))/(2*a);
    cout << "R1 = " << bhaskara << endl;

    bhaskara = ((-1*b)-sqrt(delta))/(2*a);
    cout << "R2 = " << bhaskara << endl;

    return ;
}
