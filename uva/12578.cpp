#include <bits/stdc++.h>
double PI = acos(-1);

using namespace std;

int main(){
    int tc;
    scanf("%d",&tc);
    while(tc--){
        int L;
        scanf("%d",&L);
        double radius = (L/5.0);
        double w = 6.0*L/10.0;
        double area = PI*radius*radius;
        printf("%.2lf %.2lf\n", area, w*L - area);
    }
    return 0;
}

