#include <bits/stdc++.h>

int main(){
  long long a,b;
  while(scanf("%ld %ld", &a, &b) == 2){
    printf("%ld\n", (a>b?a-b:b-a));
  }
  return 0;
}
