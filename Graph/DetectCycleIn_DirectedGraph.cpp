#include <iostream>
using namespace std;
class Solution
{
public:
    bool cycleIsPresent(int source, vector<bool> &visited, vector<bool> &currentVisisted, vector<int> adj[])
    {

        visited[source] = true;
        currentVisisted[source] = true;

        for (auto v : adj[source])
        {
            if (visited[v] == false)
            {
                if (cycleIsPresent(v, visited, currentVisisted, adj))
                    return true;
            }
            else if (visited[v] == true && currentVisisted[v] == true)
            {
                return true;
            }
        }
        currentVisisted[source] = false;
        return false;
    }
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[])
    {
        // code here
        vector<bool> visited(V, false), currentVisisted(V, false);

        for (int i = 0; i < V; i++)
        {
            if (visited[i] == false)
            {
                if (cycleIsPresent(i, visited, currentVisisted, adj))
                    return true;
            }
        }
        return false;
    }
};
int main()
{
    Solution Obj;
    return 0;
}