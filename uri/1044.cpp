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

    int a, b; cin >> a >> b;

    if (a < b) {
        swap(a,b);
    }

    if (!(a%b)) {
        printf("Sao Multiplos\n");
    }
    else {
        printf("Nao sao Multiplos\n");
    }

    return 0;
}
