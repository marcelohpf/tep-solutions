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


    vector<int> v, w;

    for (size_t i = 0; i < 3; i++) {
        int a;
        cin >> a;
        v.push_back(a);
        w.push_back(a);
    }

    sort(v.begin(), v.end());

    for (size_t i = 0; i < 3; i++) {
        fprintf(stdout, "%d\n", v.at(i));
    }

    fprintf(stdout, "\n");

    for (size_t i = 0; i < 3; i++) {
        fprintf(stdout, "%d", w.at(i));
        if (i < 2) {
            fprintf(stdout, "\n");
        }
    }

    return 0;
}
