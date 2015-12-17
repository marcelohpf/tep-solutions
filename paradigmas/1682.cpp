#include <iostream>
#include <string>
using namespace std;
 
bool solution(string gen,int c){
    return gen.size() == c;
}
char candidates(int c){
    string op = "NOP";
    return op[c];
}
string gene;
void proces(string gen){
    gene = gen;
}
bool fin=false;
void backtracking(string gen, int c,int n){
    if (!fin){
        if ( solution(gen,n) ) {
            proces (gen);
            fin = true;
            return;
        }else{
            c+=1;
            string temp;
            for ( int i=0;i<3;i++){
                int hs=1;
                temp = gen+candidates(i);
                for (int j=1,k=2;j<=c/2;j++,k+=2){
                    hs = temp.compare(c-k,j,temp,c-j,c);
                    if (!hs)
                        break;
                }
                if (hs)
                    backtracking(temp,c,n);
            }
        }
    }
}
int main(){
    int c;
    backtracking("",0,5001);
    while(cin >> c && c!=0){
        fin = false;
        cout << gene.substr(0,c) <<endl;
    }
    return 0;
}
