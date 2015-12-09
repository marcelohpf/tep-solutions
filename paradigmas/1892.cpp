#include <stdio.h>
#include <stdlib.h>
 
#define ll long long
 
ll count_inversion_merge(ll array[], ll first, ll last){
    ll mid = (first+last)/2;
    ll ai = first;
    ll bi = mid+1;
    ll *final, finali=0;
    ll inversion = 0, i;
 
    final = (ll *) malloc((last-first+1)*sizeof(ll));
 
    while (ai <= mid && bi <= last) {
        if (array[ai] <= array[bi]) {
                final[finali++] = array[ai++];
        } else {
                final[finali++] = array[bi++];
                inversion += mid - ai + 1;
        }
    }
 
    while (ai <= mid)
        final[finali++] = array[ai++];
 
    while (bi <= last)
        final[finali++] = array[bi++];
 
    for (i=0 ; i<last-first+1 ; i++)
        array[i+first] = final[i];
 
    return inversion;
}
 
ll count_inversion(ll array[], ll a, ll b){
    ll x, y, z, mid;
    if (a >= b) return 0;
 
    mid = (a+b)/2;
 
    x = count_inversion(array, a, mid);
    y = count_inversion(array, mid+1, b);
    z = count_inversion_merge(array, a, b);
 
    return x+y+z;
}
 
int main(){
    ll i, qtd;
    ll n[100100], num1, num2, tmp;
 
    while(scanf("%lld", &qtd) != EOF){
        for(i = 0; i < qtd; i++){
            scanf("%lld/%lld", &num1, &num2);
      n[i] = num1*10000000 + num2;
        }
 
    tmp = count_inversion(n, 0, qtd-1);
        printf("%lld\n", tmp);
    }
 
    return 0;
}
