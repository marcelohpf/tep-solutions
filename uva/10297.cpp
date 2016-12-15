#include <iostream>
#include <cmath>


using namespace std;

double PI = acos(-1);
int main(){
    int D,V;

    while(scanf("%d %d",&D,&V), D|V){
    /* Formula come from:
        Volume Total - (V+VCone) = Vcilindre - 2*Vpoint of cone
        */
        printf("%.3lf\n",pow(D*D*D*1.0-(6.0*V)/PI,1.0/3.0));
    }

    return 0;
}
