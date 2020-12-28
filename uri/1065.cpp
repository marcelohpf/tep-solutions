#include <bits/stdc++.h>
using namespace std;

#define PRECISION 1

int main() {
  cout << fixed << setprecision(PRECISION);
  cout.sync_with_stdio(false);
  cin.sync_with_stdio(false);

  int n;
  int cp = 0;
  for (int i = 0; i < 5; i++) {
    cin >> n;
    if (!(n & 1)) {
      cp++;
    }
  }
  printf("%d valores pares\n", cp);
}
