// Convert a graph into a minimum spanning tree
// Using prims algorithm
// The graph will be weighted
// we have to minimize the weight in the spanning tree

#include<iostream>
#include<vector>
#include<climits>  
#define MAX 20

using namespace std;



// v -> number of vertices
// e -> number of edges

int main()
{
    int v, e;      // Number of vertices
    cout << "Enter the number of vertices" << endl;
    cin >> v;
    int graph[MAX][MAX] = {{0}};
    cout << "Enter the number of edges" << endl;
    cin >> e;
    cout << "Enter the vertices & the weight b/w them seperated by space"<<endl;
    for(int i = 0; i < e; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        graph[a][b] = w;
        graph[b][a] = w;
    }
    
    cout << "Adjacecy graph" << endl;
    for(int i = 0; i < v; i++)
    {
        for(int j = 0; j < v; j++)
            cout << graph[i][j] << " ";
        cout << endl;
    }

    // Implementation
    vector<int> minSpanTree;        // Vector storres the 
    minSpanTree = calculateMinSpanTree(graph, v, e);
    for(auto x : minSpanTree)
        cout << x << " ";
    cout << endl;
    return 0;
}

