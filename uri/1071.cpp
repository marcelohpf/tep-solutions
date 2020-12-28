#include <bits/stdc++.h>
using namespace std;

#define PRECISION 1

int main() {
  cout << fixed << setprecision(PRECISION);
  cout.sync_with_stdio(false);
  cin.sync_with_stdio(false);

  int a, b;
  cin >> a >> b;
  long long sum = 0;
  if (a > b) {
    swap(a,b);
  }

  if (!(a&1)) {
    a++;
  } else {
    a += 2;
  }


  for (int i = a; i < b; i+=2) {
    sum += i;
  }
  cout << sum << endl;
}
