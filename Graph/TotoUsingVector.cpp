#include <iostream>
using namespace std;

class Solution
{
    int solve(vector<int> &ans, int source, vector<bool> &visited, vector<int> adj[])
    {
        visited[source] = true;

        // vector<int>data=adj[source];
        for (auto v : adj[source])
        {
            if (visited[v] == false)
            {
                solve(ans, v, visited, adj);
            }
        }
        ans.push_back(source);
    }
    int solve(vector<int> &ans, int source, vector<bool> &visited, vector<int> adj[])
    {
        visited[source] = true;

        // vector<int>data=adj[source];
        for (auto v : adj[source])
        {
            if (visited[v] == false)
            {
                solve(ans, v, visited, adj);
            }
        }
        ans.push_back(source);
    }
};
int main()
{
    Solution obj;
    return 0;
}