vector<vector<int>> printGraph(int V, vector<int> adj[])
{
    vector<vector<int>> ans(V);

    for (int i = 0; i < V; i++)
    {
        ans[i].push_back(i);

        for (int j = 0; j < adj[i].size(); j++)
        {
            ans[i].push_back(adj[i][j]);
        }
    }
    return ans;
}