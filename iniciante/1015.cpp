#include <iostream>
#include <iomanip>
#include <cmath>

#define PRECISION 4

using namespace std;

struct point {
    double x,y;
}point;

double square_of_difference(double, double);
double distance_of_two_points(struct point, struct point);

int main()
{
    cout << fixed;

    struct point p1, p2;
    cin >> p1.x >> p1.y;
    cin >> p2.x >> p2.y;

    double distance = 0;
    distance = distance_of_two_points(p1, p2);
    cout << setprecision(PRECISION) << distance << endl;

    return 0;
}

double distance_of_two_points(struct point p1, struct point p2)
{
    return sqrt(square_of_difference(p2.x, p1.x) +
                square_of_difference(p2.y, p1.y));
}

double square_of_difference(double a, double b)
{
    return pow((a-b),2);
}
