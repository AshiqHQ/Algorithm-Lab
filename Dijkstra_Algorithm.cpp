// WAP to find Shortest Path and Minimum Cost from a Undirected/Directed Graph.

#include <iostream>
#include <limits.h>
using namespace std;

#define n 6

int minDistance(int distance[], bool visit[]){
    int min = INT_MAX, min_index;

    for (int i = 0; i < n; i++){
        if (!visit[i] && distance[i] <= min){
            min = distance[i], min_index = i;
        }
    }
    return min_index;
}

void displayPath(int parent[], int j){
    if (parent[j] == -1){
        return;
    }
    displayPath(parent, parent[j]);
    cout << " -> " << j;
}

void displayResult(int distance[], int parent[], int src, int dst){
    cout << "Shortest Path: " << src;
    displayPath(parent, dst);
    cout << "\nMinimum Cost: " << distance[dst] << endl;
}

void dijkstra(int graph[n][n], int src, int dst){
    int distance[n];
    int parent[n];
    bool visit[n];

    for (int i = 0; i < n; i++){
        distance[i] = INT_MAX;
        visit[i] = false;
        parent[i] = -1;
    }

    distance[src] = 0;

    for (int count = 0; count < n - 1; count++){
        int u = minDistance(distance, visit);
        visit[u] = true;

        for (int i = 0; i < n; i++){
            if (!visit[i] && graph[u][i] && distance[u] != INT_MAX && distance[u] + graph[u][i] < distance[i]){
                distance[i] = distance[u] + graph[u][i];
                parent[i] = u;
            }
        }
    }

    displayResult(distance, parent, src, dst);
}

int main(){

    int graph[n][n] = {         //Directed graph: 0 based index.
        {0, 2, 5, 0, 0, 11},
        {0, 0, 0, 5, 13, 0},
        {0, 8, 0, 0, 12, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 0, 0},
        {0, 0, 0, 17, 0, 0},
    };
    int source = 0;
    int destination = 4;

    dijkstra(graph, source, destination);

}
