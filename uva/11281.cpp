#include <iostream>
#include <cmath>
#include <vector>
#define MAX 110
#define EPS 1e-6
double PI = acos(-1)/2.0;
using namespace std;
bool in_peg(double a, double b, double c,double d){
    double AB = acos((c*c - a*a - b*b)/(-2*a*b));
    double AC = acos((b*b - a*a - c*c)/(-2*a*c));
    double BC = acos((a*a - b*b - c*c)/(-2*b*c));
    double d2 = c/sin(AB);
    if(AB > PI || AC > PI || BC > PI){
        return max(a,max(b,c)) <=d ;
    }
    else{
        return d2 <= d;
    }
    return false;
}
vector<int> pegs;
int main(){
    int M;
    double D[MAX];
    scanf("%d",&M);
    for(int i=0;i<M;i++){
        scanf("%lf",&D[i]);
    }
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        pegs.clear();
        double a,b,c;
        scanf("%lf %lf %lf",&a,&b,&c);

        for(int i=0;i<M;i++){
            if(in_peg(a,b,c,D[i])) pegs.push_back(i+1);
        }
        if(pegs.empty()) printf("Peg %c will not fit into any holes",(char) i+65);
        else{
            printf("Peg %c will fit into hole(s):",(char) i+65);
            for ( auto k: pegs) printf(" %d",k);
        }
        printf("\n");
    }
    return 0;
}
