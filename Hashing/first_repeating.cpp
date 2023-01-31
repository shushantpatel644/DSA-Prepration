#include <iostream>
#include <unordered_map>
using namespace std;

class first_repeating
{
public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n)
    {
        // code here
        unordered_map<int, int> umap;

        for (int i = 0; i < n; i++)
        {
            umap[arr[i]]++;
        }

        for (int i = 0; i < n; i++)
        {
            int key = arr[i];
            auto temp = umap.find(key);
            if (temp->second > 1)
            {
                return i + 1;
            }
        }
        return -1;
    }
};
int main()
{
    return 0;
}