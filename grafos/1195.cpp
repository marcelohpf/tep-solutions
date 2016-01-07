#include <iostream>

using namespace std;

class No{
    public:
        int value;
        No *left = 0;
        No *right = 0;
        No (int value){
            this->value = value;
        }
        bool toLeft(int value){
            return this->value > value;
        }
        bool emptyNo(int direction){
            return ((direction==-1) ? !left: !right);
        }
};

class Tree{
    public:
        No *raiz = 0;
        bool first;
        Tree(){}
        void inserta(int value){
            if(!raiz)
                this->raiz = new No(value);
            else
                inserte(value,this->raiz);
        }

        void inserte(int value,No * no){
            if( no->toLeft(value) ){
                if(no->emptyNo(-1)) no->left = new No(value);
                else inserte(value, no->left);
            }else{
                if(no->emptyNo(1)) no->right = new No(value);
                else inserte(value, no->right);
            }
        }
        void prefix(No * no){
            if(no){
                cout << " " << no->value;
                prefix(no->left);
                prefix(no->right);
            }
        }
        void infix(No * no){
            if(no){
                infix(no->left);
                cout << " " << no->value;
                infix(no->right);
            }
        }
        void posfix(No * no){
            if(no){
                posfix(no->left);
                posfix(no->right);
                cout << " " << no->value;
            }
        }
};
int main(){
    int c;
    cin >> c;
    for (int caso = 1; caso<=c; caso++){
        int nos;
        cin >> nos;
        Tree a;
        while(nos--){
            int v;
            cin >> v;
            a.inserta(v);
        }
        cout << "Case "<<caso<<":"<<endl;
        cout << "Pre.:";
        a.prefix(a.raiz);
        cout << endl << "In..:";
        a.infix(a.raiz);
        cout << endl << "Post:";
        a.posfix(a.raiz);
        cout << endl << endl;
    }

    return 0;
}

