#include <iostream>
#include <vector>
#include <map>
 
using namespace std;
 
int main(){
    int n, k;
    string s;
    vector <string> v;
    map <string, int> m;
    map <string, int>::iterator it;
 
    int instancia=1;
    while(cin >> n >> k && (n || k)){
        m.clear();
        v.clear();
 
        for(int i=0; i<n; i++){
            cin >> s;
            v.push_back(s);
            m[s]=i;
        }
 
        int j=0;
        while(!m.empty() && k>0){
            for(it=m.begin(); it!=m.end() && k>0; it++){
                if((it->second-j)<=k){
                    for(int i=it->second; i>j; i--){
                        v[i]=v[i-1];    
                        m[v[i-1]]++;
                    }
 
                    k-=(it->second - j);
                    v[j]=it->first;
                    j++;
                    m.erase(it->first);
                    break;
                }
            }
        }
 
        cout << "Instancia " << instancia++ << endl;
        for(int i=0; i<n; i++)
            cout << v[i] << " ";
 
        cout << endl << endl;
    }
 
    return 0;
}
