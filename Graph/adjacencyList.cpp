#include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[v].push_back(v);
    adj[u].push_back(u);
}
void printGraph(vector<int> adj[])
{
    for (int i = 0; i < v; i++)
    {
        for (auto x : adj[i])
        {
            cout << "->" << x;
        }
        cout << endl;
    }
}
int main()
{
    int v = 4;
    vector<int> adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 3);

    printGraph(adj, v);
}

/*// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[v].push_back(v);
    adj[u].push_back(u);
}
void printGraph(vector<int> adj[],int v)
{
    for (int i = 0; i < v; i++)
    {
        cout<<"adjencecy list of head ->";
        for (auto x : adj[i])
        {
            cout<<"-> " << x;
        }
        cout << endl;
    }
}
int main()
{
    int v = 5;
    vector<int> adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);

    printGraph(adj, v);
}*/