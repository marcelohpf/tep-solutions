#include <vector>
#include <iostream>
#include <cstring>
#define MAX 1000010
 
using namespace std;
std::vector<int> v[MAX];
 
int main()
{
    int m, n;
    while(cin >> n >> m){
 
        for (int i = 0; i < MAX; ++i)
        {
            v[i].clear();
        }
 
        int valor;
        for (int i = 1; i <= n; ++i)
        {
            cin >> valor;
            v[valor].push_back(i);
        }
        while(m>0){
            int k, vaux;
            cin >> k >> vaux;
            if(v[vaux].size() > k-1)
                cout << v[vaux][k-1] << endl;
            else
                cout << "0" << endl;
            m--;
        }
    }
    return 0;
}
