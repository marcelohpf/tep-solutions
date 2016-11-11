#include <bits/stdc++.h>

double PI = acos(-1);

using namespace std;
double rad(int k, string w){
//      return (w == "min"? k/60.0:k*1.0);
    if(w == "min") return (k/60.0)*PI/180.0;
    else {
        if(k>180){
            k=180 - k%180;
        }
        return k*PI/180.0;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    int dis, deg;
    string w;
    while(cin >> dis >> deg >> w){
        dis+=6440;
        printf("%.6lf %.6lf\n",  rad(deg,w) * dis, 2.0*dis*sin(rad(deg,w)/2));

    }
    return 0;
}
