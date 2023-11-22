#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for (int i = a; i <  b; i++)
#define ff first
#define ss second;
#define setBits(x) builtin_popcount(x)

const int N = 1e7+2, MOD = 1e9+7;

vi adjList[N];

signed main(){
    int n,m;
    cout << "Enter number of vertex: ";
    cin>>n;
    cout << "enter number of edges: ";
    cin>>m;
    vvi adjMatrix(n+1, vi(n+1,0));
    rep(i,0,m)
    {
        int x, y;
        cout << "Enter the edge source: ";
        cin>> x;
        cout << "Enter the edge destination: ";
        cin>> y;
        adjMatrix[x][y] =1;
        adjMatrix[y][x] =1;
        adjList[x].push_back(y);
        adjList[y].push_back(x);
    }

cout << " adjency matrix of above graph is given by: " << endl;

rep(i, 1, n+1){
    rep(j, 1, n+1){
        cout << adjMatrix[i][j] << " ";
    }
    cout << endl;
}
cout << endl << endl;

cout << "Adjency list of above graph is given by: " << endl;
rep(i,1,n+1){
    cout << i << "->";
    for(int x: adjList[i]){
        cout << x << " ";
    }
    cout << endl;
}

return 0;
}
