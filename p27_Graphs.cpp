/*
1. Graph is a collection of Nodes connected by Edges
2. Types of graphs-
Directed : edges are single directional
Undirected : edges are Bi-directional

3. Degree of a Node(for Undirected graph)- no. of other nodes directly connected to that node/no of edges attached to that node.
for directed graph,
Indegree- no. of edges pointing towards the node
Outdegree- no. of edges pointing out from that node

4. Weighted graph- a graph with some weight value on every edge, every edge can have same/different weight values, for normal unweighted graphs,weights are assumed to be 1

5. Path- a sequence of nodes, where each node in the path is visited exactly once
6. Cyclic graph-https://www.geeksforgeeks.org/what-is-cyclic-graph/
7. Graph representation- https://www.geeksforgeeks.org/graph-and-its-representations/
*/
// M-2 of Adjacency list- using Hashmap

#include <bits/stdc++.h>
using namespace std;
class graph
{
public:
    unordered_map<int, list<int>> adj;
    // directed==0 -> undirected graph, directed==1 ->directed graph
    void addEdge(int a, int b, bool directed)
    {
        adj[a].push_back(b);
        if (directed == 0)
        { // undirected
            adj[b].push_back(a);
        }
    }
    void printGraph()
    {
        for (auto &i : adj)
        {
            cout << i.first << " -> ";
            for (auto &j : i.second)
            {
                cout << j << " ";
            }
            cout << "\n";
        }
    }
};

// P-1 Creating and Printing graph
// https://www.codingninjas.com/studio/problems/create-a-graph-and-print-it_1214551?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=PROBLEM

int main()
{
    graph *g = new graph();
    g->addEdge(1, 2, 1);
    g->addEdge(6, 3, 1);
    g->addEdge(3, 6, 1);
    g->addEdge(8, 2, 1);
    g->addEdge(6, 2, 1);
    g->addEdge(9, 7, 1);
    g->addEdge(3, 12, 1);
    g->addEdge(2, 65, 1);
    g->addEdge(1, 24, 1);
    g->addEdge(3, 42, 1);
    g->addEdge(2, 55, 1);
    g->addEdge(1, 21, 1);
    g->addEdge(3, 6, 1);
    g->printGraph();
    cout << "\n";
}
// Connected graph- all nodes have ateast 1 edge
// disconnected graph- some nodes have no edges, they're disconnected from the remaining graph

// P-2 BFS in Graph
// https://www.codingninjas.com/studio/problems/bfs-in-graph_973002?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=PROBLEM
// TC O(n) n:vertices, SC O(2n) for visited arr and queue

// P-3 DFS Traversal
// https://www.codingninjas.com/studio/problems/dfs-traversal_630462?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=PROBLEM
// TC O(n) SC O(n) for visited
// For visited, we can use both simple array/unmap

// LC-841. Keys and Rooms
// Can also be done with BFS

// P-4 Cycle Detection In Undirected Graph
// https://www.codingninjas.com/studio/problems/cycle-detection-in-undirected-graph_1062670?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=PROBLEM
//Both methods, bfs & dfs are imp