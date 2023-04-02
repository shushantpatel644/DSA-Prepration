#include <iostream>
using namespace std;

class Solution
{
    int DfsRec(int source, stack<int> &st, vector<bool> &visited, vector<int> adj[])
    {
        visited[source] = true;

        // vector<int>data=adj[source];
        for (auto v : adj[source])
        {
            if (visited[v] == false)
            {
                DfsRec(v, st, visited, adj);
            }
        }
        st.push(source);
    }

public:
    // Function to return list containing vertices in Topological order.
    vector<int> topoSort(int V, vector<int> adj[])
    {
        // *******using dfs*******
        stack<int> st;
        vector<bool> visited(V, false);

        for (int i = 0; i < V; i++)
        {
            if (visited[i] == false)
                DfsRec(i, st, visited, adj);
        }

        vector<int> ans;
        while (!st.empty())
        {
            int x = st.top();
            st.pop();
            ans.push_back(x);
        }
        return ans;
    }
};
int main()
{
    Solution obj;
    return 0;
}