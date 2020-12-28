#include <bits/stdc++.h>
using namespace std;

#define PRECISION 1

int main() {
  cout << fixed << setprecision(PRECISION);
  cout.sync_with_stdio(false);
  cin.sync_with_stdio(false);

  int a, b;
  while (cin >> a >> b, a > 0 && b > 0) {
    if (a > b) {
      swap(a, b);
    }
    long long sum = 0;
    for (int i = a; i<= b; i++) {
      sum += i;
      cout << i << " ";
    }
    cout << "Sum=" << sum << endl;
  }
}
