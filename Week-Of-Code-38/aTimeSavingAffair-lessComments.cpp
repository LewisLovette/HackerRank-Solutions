//Dijkstra's shortest path with Priority queue - LL
#include<bits/stdc++.h>

using namespace std;

# define INF 0x3f3f3f3f
 
typedef pair<int, int> iPair;
 
class Graph
{
    int V;    //Vertexs
 
    //Vertex+edge pairs
    list< pair<int, int> > *adj;
 
public:
    Graph(int V);   //number of edges
 
    // adds edge
    void addEdge(int u, int v, int w);
    
    //Shortest path from int s
    long shortestPath(int s, int T);
};
 
//Memory for adjacent list
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<iPair> [V];
}
 
void Graph::addEdge(int u, int v, int w)
{
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
}
 
//This is the Dijkstra bit but using priorty Queue
long Graph::shortestPath(int src, int T){   

    int time = 0;
    bool light = true;

    //Creating the priority Queue
    priority_queue< iPair, vector <iPair> , greater<iPair> > pq;
 
    // Set all distances as infinite
    vector<int> dist(V, INF);
 
    // Put source into queue and set to 0
    pq.push(make_pair(0, src));
    dist[src] = 0;
 
    //Looping through priority que until it is empty
    while (!pq.empty()){
        int u = pq.top().second;
        pq.pop();
 
        // 'i' is used to get all adjacent vertices of a vertex
        list< pair<int, int> >::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i){   
            //vertex + weight of current adjacent for U
            int v = (*i).first;
            int weight = (*i).second;

            time = dist[u];

            while(time >= T){
                time -= T;
                light = !light;
            }

            //Shorter path through U to V
            if(light == true){  //Green light
                if(dist[v] >  dist[u] + weight){
                    //Giving lower V value
                    dist[v] = dist[u] + weight;
                    pq.push(make_pair(dist[v], v));
                }
            }
            else{   //Red light
                if(dist[v] >  dist[u] + weight + (T-time)){
                    //Giving the lower V value
                    dist[v] = dist[u] + weight+(T-time);
                    pq.push(make_pair(dist[v], v));
                    cout << "dist["<<v<<"]: "<< dist[v] << "   time: " << time << endl;
                }
            }

            light = true;
        }
    }
    
    return (long)dist[V-1];
}

// Complete the leastTimeToInterview function below.
int leastTimeToInterview(int V, int t, int m) {
    //vertex1, vertex2, weight
    int x, y, w;
    
    Graph g(V+1);   //as works from 0
 
    //Creating the graph
    for(int i = 0; i < m; i++){
        cin >> x >> y >> w;

        g.addEdge(x, y, w);
    }
 
    long result = g.shortestPath(1, t);

    //Test
    //cout << result << endl;

    return result;
}

int main(){

    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = leastTimeToInterview(n, k, m);

    fout << result << "\n";

    fout.close();

    return 0;
}
