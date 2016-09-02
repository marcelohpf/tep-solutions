#include <iostream>

using namespace std;

class No{
    public:
        char value;
        No *left = 0;
        No *right = 0;
        No (char value){
            this->value = value;
        }
        bool toLeft(char value){
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
        void inserta(char value){
            if(!raiz)
                this->raiz = new No(value);
            else
                inserte(value,this->raiz);
        }

        void inserte(char value,No * no){
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
                show(no->value);
                prefix(no->left);
                prefix(no->right);
            }
        }
        void infix(No * no){
            if(no){
                infix(no->left);
                show(no->value);
                infix(no->right);
            }
        }
        void posfix(No * no){
            if(no){
                posfix(no->left);
                posfix(no->right);
                show(no->value);
            }
        }
        bool finde(char c,No * no){
            if(no){
                if(no->value == c)
                    return true;
                else if(no->toLeft(c))
                    return finde(c,no->left);
                else
                    return finde(c,no->right);
            }
            return false;
        }
        void show(char c){
            if(first){
                first=false;
            }else{
                cout << " ";
            }
            cout << c;
        }
};
int main(){
    Tree a;
    char c;
    string b;
    while(cin >> b){
        if(b=="I"){
            cin >> c;
            a.inserta(c);
        }else{
            if(b=="P"){
                cin >> c;
                cout << c << (a.finde(c,a.raiz)? " existe":" nao existe");
            }else if(b=="INFIXA"){
                a.first=true;
                a.infix(a.raiz);
            }else if(b=="PREFIXA"){
                a.first=true;
                a.prefix(a.raiz);
            }else if(b=="POSFIXA"){
                a.first=true;
                a.posfix(a.raiz);
            }
            cout << endl;
        }
    }

    return 0;
}

