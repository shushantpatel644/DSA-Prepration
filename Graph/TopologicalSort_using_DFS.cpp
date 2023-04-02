#include <iostream>
using namespaces std;

class Solution
{
public:
    vector<int> topoSort(int V, vector<int> adj[])
    {
        // code here
        vector<int> ans;
        queue<int> q;

        // indegree creation
        vector<int> inDegree(V, 0);
        for (int i = 0; i < V; i++)
        {
            vector<int> data = adj[i];
            for (auto x : data)
            {
                inDegree[x]++;
            }
        }

        for (int i = 0; i < V; i++)
        {
            if (inDegree[i] == 0)
            {
                q.push(i);
            }
        }

        while (!q.empty())
        {
            int u = q.front();
            q.pop();
            ans.push_back(u);

            for (auto v : adj[u])
            {
                // reduce    indegree of v
                inDegree[v]--;
                // if indegree is 0 then push into v
                if (inDegree[v] == 0)
                    q.push(v);
            }
        }
        return ans;
    }
};

int main()
{
    Solution obj;

    return 0;
}