#include <iostream>
#include <queue>
using namespace std;

class No{
    public: 
    int value=0;
    No * l,*d;
    No(int i){
        value=i;
        l=0;
        d=0;
    }
};

class Tree{
    public: 
    No *raiz=0;
    void insert(int v){
        if(!raiz){
            raiz= new No(v);
        }else{
         insert_n(v,raiz);
        }
    }
    void insert_n(int v,No *r){
        if(r->value < v){
            if(r->d) insert_n(v,r->d);
            else r->d=new No(v);
        }else{
            if(r->l) insert_n(v,r->l);
            else r->l=new No(v);
        }
    }
    void pt(){
        queue<No *> n;
        cout << raiz->value;
        if(raiz->l) n.push(raiz->l);
        if(raiz->d) n.push(raiz->d);
        while(!n.empty()){
            cout << " " << n.front()->value;
            if(n.front()->l) n.push(n.front()->l);
            if(n.front()->d) n.push(n.front()->d);
            n.pop();

        }
        cout << endl<<endl;
    }

};
int main(){
    int C;
    cin >> C;
    for(int caso=1;caso<=C;caso++){
        int N;
        cin >> N;
        Tree a;
        while(N--){
            int v;
            cin >> v;
            a.insert(v);
        }
        cout << "Case "<<caso<<":"<<endl;
        a.pt();

    }
   return 0;
}
