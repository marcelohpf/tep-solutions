#include <iostream>
#include <cstdio>
#include <cmath>

//#define pi 3.14159
//#define d4_3 1.3333333333333

#define constante 4.1887866666667

using namespace std;

int main()
{
    unsigned int radius;
    cin >> radius;
    double radius_powered = pow(radius,3);
//    double d_4_3 = 4.0/3.0;
//    const double constante = d_4_3*pi;
    double volume = constante*radius_powered;
    cout << "radius: " << radius << endl;
    cout << "radius_powered: " << radius_powered << endl;
    cout << "volume(constante*radius_powered): " << volume << endl;

    printf("constante = %.12lf\n", constante);
    printf("VOLUME = %.3lf\n", volume);

    return 0;
}
