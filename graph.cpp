#include<bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 100;

int adjMatric[MAX_SIZE][MAX_SIZE];

void initializeGraph(int v){
    for (int i=0; i<v; i++){
        for (int j= 0; j<v; j++){
            adjMatric[i][j]=0;
        }
    }
}

// for undirected graph
void addEdge(int source, int dest){
    adjMatric[source][dest] = 1;
    adjMatric[dest][source] = 1;
}

void setNodeData(int index, string data) {
    string nodeData[index];
    nodeData[index] = data;
}

void printAdjMatrix(int v){
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            cout << adjMatric[i][j]<< " ";
        }
        cout << endl;
        
    }
    
}

int main(){
    int V;
    cout << "Enter number of vertex in the graph: ";
    cin >> V;
    int source, dest;
    string data;
    int index;

    initializeGraph(V);

    
    for (int i = 0; i < V; i++) {
        cout << "Enter index and data with space: ";
        cin >> index >> data;
        setNodeData(index, data);

        cout << "Enter source and destination with space: ";
        cin >> source >> dest;
        addEdge(source, dest);
    }
    cout << "Adjacency Matrix:" << endl;
    printAdjMatrix(V);
    return 0;
    
}

