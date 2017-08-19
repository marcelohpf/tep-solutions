#include <bits/stdc++.h>

#define ull unsigned long long

int main(){
  ull n = 100;
  ull sum =1;
  /*for(int i = 1, l = 1; i<=n; i+=2){
    printf("%d ", i);
    if(l == sum){
      sum+=2;
      l=0;
      printf(" - %d\n", sum-2);
    }
    l++;
  }
  */

  while(scanf("%llu", &n) == 1){
    sum=0;
    for(ull k = n; k> 1; k-=2){ sum+=(k); }
    sum*=2;
    sum++;
    ull result = sum+sum-2+sum-4;
    //printf("%llu %llu %llu\n", sum, sum-2, sum-4);
    printf("%llu\n", (n==1?1:sum+sum-2+sum-4));

  }

  return 0;
}
