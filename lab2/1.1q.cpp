#include<iostream>
#include<list>
using namespace std;
class Graph {

  int numVertices;
  list<int>* adjLists;
  bool* visited;

   public:
  Graph(int vertices);
  void addEdge(int src, int dest);
  void BFS(int startVertex);
};
Graph::Graph(int vertices) {
  numVertices = vertices;
  adjLists = new list<int>[vertices];
}

void Graph::addEdge(int src, int dest) {
  adjLists[src].push_back(dest);
  adjLists[dest].push_back(src);
}
void Graph::BFS(int startVertex) {
 visited=new bool[numVertices];
  for (int i = 0; i < numVertices; i++)
    visited[i] = false;

  list<int> queue;

  visited[startVertex] = true;
  queue.push_back(startVertex);

  list<int>::iterator i;

  while (!queue.empty()) {
    int currVertex = queue.front();
    cout << "Visited " << currVertex << "\n";
    queue.pop_front();

    for (i = adjLists[currVertex].begin(); i != adjLists[currVertex].end(); ++i) {
      int adjVertex = *i;
      if (!visited[adjVertex]) {
        visited[adjVertex] = true;
        queue.push_back(adjVertex);
      }
    }
  }
}

int main(){
int h;
cout<<"Enter the number of node:";
cin>>h;
Graph g(h);
string u;
while(true){
    cout<<"Enter source and destination:";
    int d,f;
    cin>>d>>f;
    g.addEdge(d,f);
     cout<<"Enough??\n";
    cin>>u;
    if(u=="YES")
        break;
    else
        u="";
}
cout<<"\nEnter the starting node:";
int t;
cin>>t;
g.BFS(t);
}
