#include <iostream>
#include <cstring>
#include <queue>
#include <vector>

using namespace std;

#define MAX 107

bool visited[MAX];
int edges[MAX];
string words[3];
vector<int> adj[MAX];
vector<string> x[MAX];

void addEdges( int v, int w ) {
    adj[v].push_back(w);
    edges[v]++;
}

void addWords( int v, int t1, int t2 ) {
    for (int i = 0; i < v; ++i) {
        if (visited[i]) {
            if (edges[i] < t1) {
                x[i].push_back(words[0]);
            }
            else if (edges[i] < t2) {
                x[i].push_back(words[1]);
            }
            else {
                x[i].push_back(words[2]);
            }
        }else{
            x[i].push_back(words[0]);
        }
    }
}

void bfs(int s) {
    queue<int> mQ;
    memset(visited, 0, sizeof visited);
    visited[s] = true;
    while (true) {
        for (vector<int>::iterator i = adj[s].begin(); i != adj[s].end(); ++i) {
            if ( !visited[*i] ) {
                visited[*i] = true;
                mQ.push(*i);
            }
        }
        if ( !mQ.empty() ) {
            s = mQ.front();
            mQ.pop();
        }
        else
            break;
    }
}

int main() {
    int n, a, t1, t2;
    string name;

    while (cin >> n, n) {
        memset(edges, 0, sizeof edges);
        memset(adj,0,sizeof adj);;
        memset(x, 0, sizeof x);
        memset(visited, 0, sizeof visited);
        for (int i = 0; i < n; ++i)
            while (cin >> a, a)
                addEdges(i, a-1);
        while (cin >> a, a) {
            bfs(a-1);
            cin >> t1 >> t2;
            for (int i = 0; i < 3; ++i) {
                cin >> words[i];
            }
            addWords(n, t1, t2);
        }
        for (int i = 0; i < n; ++i) {
            cin >> name;
            cout << name << ": ";
            for (vector<string>::iterator it = x[i].begin(); it != x[i].end(); ++it) {
                cout << *it << " ";
            }
            cout << endl;
        }
    }

    return 0;
}

