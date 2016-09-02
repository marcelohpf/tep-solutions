#include <iostream>

using namespace std;

int main(){
    int casos;
    cin >> casos;
    int s;
    for (int caso =1; caso <= casos; caso++){
        cin >> s;
        int n;
        for (int i=0; i<s; i++){
            cin >> n;
            if( s/2 == i) cout << "Case "<<caso<<": "<<n<<endl;
        }
    }
    return 0;
}
