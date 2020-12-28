#include <bits/stdc++.h>
using namespace std;

#define PRECISION 1

int main() {
  cout << fixed << setprecision(PRECISION);
  cout.sync_with_stdio(false);
  cin.sync_with_stdio(false);

  int n;
  cin >> n;
  int i = 1;
  while (n--) {
    for(int j = 0; j < 3; i++, j++)  {
      cout << i << " ";
    }
    i++;
    cout << "PUM" << endl;
  }
}
