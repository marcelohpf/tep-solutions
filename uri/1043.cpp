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

    vector<double> v, w;

    for (size_t i = 0; i < 3; i++) {
        double a;
        cin >> a;
        v.push_back(a);
        w.push_back(a);
    }

    sort(v.begin(), v.end());

    double a, b, c;
    a = v.at(0);
    b = v.at(1);
    c = v.at(2);

    if (a + b > c) {
        cout << "Perimetro = " << a+b+c << endl;
    }
    else {
        double area = (w.at(0) + w.at(1)) * w.at(2)/2;
        cout << "Area = " << area << endl;
    }

    return 0;
}
