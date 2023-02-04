bool hasArrayTwoCandidates(int arr[], int n, int x)
{
    // code here
    unordered_map<int, int> umap;

    for (int i = 0; i < n; i++)
        umap[arr[i]]++;

    for (auto itr = umap.begin(); itr != umap.end(); itr++)
    {
        int key = itr->first;
        int val = itr->second;

        int pair = x - key;
        if (pair == key)
        {
            if (val > 1)
                return true;
        }
        else
        {
            if (umap.find(pair) != umap.end())
                return true;
        }
    }
    return false;