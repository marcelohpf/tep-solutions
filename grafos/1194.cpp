#include <iostream>

using namespace std;

void posfixa(string pre,string in,int n){
    if(in.size()>1){
        int p = in.find(pre[0]);
        posfixa(pre.substr(1,p),in.substr(0,p),n);
        posfixa(pre.substr(p+1,n),in.substr(p+1,n),n);

    }
    if(pre.size()!=0)
        cout << pre[0];
}

int main(){
    string pre,in;
    int k;
    cin >> k;
    int n;
    while(k--){
        cin >> n >> pre >> in;
        posfixa(pre,in,pre.size());
        cout << endl;
    }
    return 0;
}
