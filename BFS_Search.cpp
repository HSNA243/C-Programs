#include <iostream>
#include <list>
using namespace std;

class graph
{
    int v;

    list<int> *adj;

public:
    graph(int v);
    void edge(int u, int v);
    void bfs();

};

graph::graph(int v){
    this->v = v;
    adj = new list<int>[v];
}
void graph::edge(int u, int v) {
    adj[u].push_back(v);
}
void graph::bfs(){

    bool *visits = new bool[v];
    for (int i = 0 ; i < v ; i ++){
        visits[i] = false;
    }
    list<int> q;
    visits[0] = true;
    q.push_back(0);
    int s = 0;
    list<int>::iterator i;
    while (!q.empty()){
        s = q.front();
        cout << s << " " ;
        q.pop_front();
        for(i = adj[s].begin();i!=adj[s].end();i++){
            if (visits[*i]==false){
                q.push_back(*i);
                visits[*i] = true;
            }
        }
    }
}
int main(){
    graph g(4);
    g.edge(0,1);
    g.edge(0,2);
    g.edge(1,2);
    g.edge(2,0);
    g.edge(2,3);
    g.edge(3,3);

    cout << "BFS implementation: " << endl;

    g.bfs();

    return 0;

}

