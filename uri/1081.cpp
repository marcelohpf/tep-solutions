#include <iostream>
#include <cstring>
#define MAX 21
int vert[MAX][MAX];
int mac[MAX];

using namespace std;

string mount(int v,int w,string spaces){
    cout << spaces<< v << "-" << w ;
    if(mac[w]){
        cout << " pathR(G,"<<w<<")";
    }
    return "";
}
int pathR(int v,string spaces){
    int k=0;
    for(int w =0; w<MAX; w++){
        if(vert[v][w] == 1){
            cout << mount(v,w,spaces) << endl;
            vert[v][w]=0;
            if(mac[w]){
                mac[w]=0;
                pathR(w,spaces+"  ");
            }
            k=1;
        }
    }
    return k;
}
void printg(int vli);
int main(){
    int N;
    cin >> N;
    for(int caso=1; caso<=N ; caso++){
        cout << "Caso "<<caso<<":"<<endl;
        memset(vert,0,sizeof(vert));
        memset(mac,1,sizeof(mac));
        int vli,ali;
        cin >> vli >> ali;
        for (int i =0;i<ali;i++){
            int v1,v2;
            cin >> v1 >> v2;
            vert[v1][v2]=1;
        }
        for(int i=0;i<vli;i++){
            mac[i]=0;
            if(pathR(i,"  "))
                cout << endl;
        }
    }
    return 0;
}
