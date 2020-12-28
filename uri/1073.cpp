#include <bits/stdc++.h>
using namespace std;

#define PRECISION 1

int main() {
  cout << fixed << setprecision(PRECISION);
  cout.sync_with_stdio(false);
  cin.sync_with_stdio(false);

  int a, b;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a;
    if (a >= 10 && a <= 20) {
      b++;
    }

  }
  cout << b << " in" << endl;
  cout << n - b << " out" << endl;
}
