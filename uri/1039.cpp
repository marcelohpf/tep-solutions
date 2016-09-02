#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double R1,X1,Y1,R2,X2,Y2;
    while ( cin >> R1 >> X1 >> Y1 >> R2 >> X2 >> Y2 ){
        // Distância euclidiana
        double dist = sqrt( (X1-X2)*(X1-X2) + (Y1-Y2)*(Y1-Y2) );
//        cout << dist << " ";
        if ( R1 - (dist+R2)  >= 0) cout << "RICO"<<endl;
        else cout << "MORTO" <<endl;


    }
    return 0;
}
