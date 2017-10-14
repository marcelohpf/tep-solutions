#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll fat(int n){
  ll k = 1;
  while( n ){
    k *= (n--);
  }
  return k;
}
int main(){
  int N, M;
  while(scanf("%d %d", &N, &M), N || M){
    int n[103] = {0} , m[103] = {0} , c[103] = {0};
    n[0]=1;m[0]=1;c[0]=1;
    for (int i = 1; i<= N; i++){  n[i]=i; }
    for (int i = 1; i<= M; i++){  m[i]=i; }
    for (int i = 1; i<= (N-M); i++){  c[i]=i; }
    for (int i = 1; n[i] && m[i]; i++){  /*cout << i << " " << n[i] << " " << m[i] << endl;*/  n[i]=1; m[i]=1; }
    for (int i = 1; n[i] && c[i]; i++){  if(n[i] != 1) {c[i]=1; n[i]=1;} /*cout << i << " " << n[i] << " " << c[i] << endl;*/  }
    ll nn=1, mm=1, cc=1;
    for (int i = 1; i<= N; i++){  for(int j=1; j<(N-M); j++) {if(c[j]>1&& n[i]%c[j] == 0){ n[i] /= c[j]; c[j] = 1; }} nn*=n[i];  }
    for (int i = 1; i<= M; i++){  mm*=m[i]; }
    for (int i = 1; i<= N-M; i++){  cc*=c[i]; /*cout << c[i] << endl;*/}
    nn = max(nn, 1LL);
    mm = max(mm, 1LL);
    cc = max(cc, 1LL);

    printf("%d things taken %d at a time is %ld exactly.\n", N, M, nn/(mm*cc));
  }
  return 0;
}
