#include <bits/stdc++.h>

int f(int i){
  if (i > 100){
    return i-10;
  }else{
    return 91;
  }
}
int main(){
  int n=0;
  while(scanf("%d", &n), n!=0){
    printf("f91(%d) = %d\n", n, f(n));
  }

  return 0;
}
