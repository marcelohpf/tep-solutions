#include <bits/stdc++.h>
using namespace std;

#define PRECISION 1

int main() {
  cout << fixed << setprecision(PRECISION);
  cout.sync_with_stdio(false);
  cin.sync_with_stdio(false);

  int d, h, m, s;
  scanf("Dia %d\n", &d);
  scanf("%d : %d : %d\n",&h, &m, &s);
  long long di = d*86400 + h*3600 + m*60 + s;
  scanf("Dia %d\n", &d);
  scanf("%d : %d : %d\n",&h, &m, &s);
  long long df = d*86400 + h*3600 + m*60 + s;
  long long dd = df - di;

  printf("%lld dia(s)\n", dd/86400);
  dd %= 86400;
  printf("%lld hora(s)\n", dd/3600);
  dd %= 3600;
  printf("%lld minuto(s)\n", dd/60);
  dd %= 60;
  printf("%lld segundo(s)\n", dd);
}
