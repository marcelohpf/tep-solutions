#include <iostream>
#include <queue>
#include <vector>
#include <functional>

using namespace std;

int main(){
    int i;
    int k;

    priority_queue<int,vector<int>,less<int> > im;
    priority_queue<int,vector<int>,greater<int> > pa;
    while(cin >> i){
        while(i--){
            cin >> k;
            if(k&1){ im.push(k); }
            else { pa.push(k); }
        }
        while(!pa.empty()){
            cout << pa.top()<<endl;
            pa.pop();
        }
        while(!im.empty()){
            cout << im.top() << endl;
            im.pop();
        }
    }
    return 0;
}
