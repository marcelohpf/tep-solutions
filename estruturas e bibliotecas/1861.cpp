#include <iostream>
#include <map>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
    string assassin,vitime;
    map<string,int> assasins;
    while(cin >> assassin >> vitime){
        if(assasins[assassin]!=-1){
            assasins[assassin]+=1;
        }
        assasins[vitime]=-1;
    }
    cout << "HALL OF MURDERERS"<<endl;
    for(map<string,int>::iterator ma = assasins.begin(); ma!=assasins.end();ma++){
        if((*ma).second != -1){
            cout << (*ma).first << " " << (*ma).second<<endl;
        }
    }
 
return 0;
}
