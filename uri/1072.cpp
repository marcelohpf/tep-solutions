#include <bits/stdc++.h>
using namespace std;

#define PRECISION 1

int main() {
  cout << fixed << setprecision(PRECISION);
  cout.sync_with_stdio(false);
  cin.sync_with_stdio(false);

  int n;
  cin >> n;
  for (int i = 2; i <= n; i+=2) {
    cout << i << "^2 = " << i*i << endl;
  }
}
