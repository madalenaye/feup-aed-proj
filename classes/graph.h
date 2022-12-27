//
// Created by Madalena Ye on 27/12/2022.
//

#ifndef RENAIR_GRAPH_H
#define RENAIR_GRAPH_H

#include <string>
#include <vector>
#include <list>

using namespace std;

class Graph {
    struct Edge {
        string dest;   // Destination node
        string airline;
        double distance; // An integer weight
    };

    struct Node {
        list<Edge> adj; // The list of outgoing edges (to adjacent nodes)
        bool visited;   // As the node been visited on a search?
    };

    int size;              // Graph size (vertices are numbered from 1 to n)
    vector<Node> nodes; // The list of nodes being represented

public:
    // Constructor: nr nodes and direction (default: directed)
    Graph(int nodes);
    Graph();

    // Add edge from source to destination with a certain weight
    void addEdge(string src, string dest, string airline);

    // Depth-First Search: example implementation
    //void dfs(string v);

};

#endif //RENAIR_GRAPH_H
