#include <bits/stdc++.h>

using namespace std;

int main()
{
    int nodes, edges, x , y, cuts;
    map<int, int> tree;
    cin >> nodes >> edges;
    int weights[edges] = {0};
    
    //input into map
    for(int i = 0; i < edges; i++){
        cin >> x >> y;
        tree.emplace(x, y);
    }
    
    //Printing the tree
    //for(auto it = tree.begin(); it != tree.end(); it = next(it)){
    //    cout << it->first << " " << it->second << endl;
    //}
    
    //initialize weights to 1;
    for(int i = 0; i < nodes; i++) weights[i] = 1;
    
    //Adding weights to each node 
    //(gives 1 to each leaf, if leaf has leaves connected, adds their weight to itself)
    for(auto it = tree.rbegin(); it != tree.rend(); it = next(it)){
        if(it->second != 1){    //only adds to parent of nodes.
            weights[it->second-2]++;
            weights[it->second-2] += weights[it->first-2]-1;
        }
    }
    
    //print weights - doesn't include root. -Starts at node 2.
    for(int i = 0; i < nodes-1; i++) if(weights[i]%2 == 0) cuts++;
    cout << cuts;
    
    return 0;
}
