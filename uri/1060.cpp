#include <bits/stdc++.h>
using namespace std;

#define PRECISION 1

int main() {
  cout << fixed << setprecision(PRECISION);
  cout.sync_with_stdio(false);
  cin.sync_with_stdio(false);

  double n;
  int cp = 0;
  for (int i = 0; i < 6; i++) {
    cin >> n;
    if (n > 0) {
      cp++;
    }
  }
  printf("%d valores positivos\n", cp);
}
