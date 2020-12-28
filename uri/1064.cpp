#include <bits/stdc++.h>
using namespace std;

#define PRECISION 1

int main() {
  cout << fixed << setprecision(PRECISION);
  cout.sync_with_stdio(false);
  cin.sync_with_stdio(false);

  double n, v = 0.0;
  int cp = 0;
  for (int i = 0; i < 6; i++) {
    cin >> n;
    if (n > 0) {
      cp++;
      v += n;
    }
  }
  printf("%d valores positivos\n", cp);
  printf("%.1lf\n", v/cp);
}
