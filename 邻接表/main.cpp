#include <iostream>
#include <list>
using namespace std;

class Graph
{
    int V;
    list<int> *adj;
    void BFSUtil(int v, bool visted[]);

public:
    Graph(int V);
    void addEdge(int v, int w);
    void BFS(int v);
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>;
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}

void Graph::BFSUtil(int v, bool visited[])
{
    list<int> queue;

    visited[v] = true;
    queue.push_back(v);

    list<int>::iterator i;

    while(!queue.empty())
    {
        v = queue.front();

    }
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
