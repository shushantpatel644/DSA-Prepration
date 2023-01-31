#include <iostream>
#include <unordered_map>
using namespace std;

class non_repaeting
{
public:
    int firstNonRepeating(int arr[], int n)
    {
        // Complete the function
        unordered_map<int, int> s;

        for (int i = 0; i < n; i++)
        { // o(n)
            s[arr[i]]++;
        }

        for (int i = 0; i < n; i++)
        { // o(N)
            int key = arr[i];
            auto temp = s.find(key); // o(1)
            if (temp->second == 1)
                return key;
            // if(s[arr[i]]==1)
            // return arr[i];
        }
        return 0;
    }
};
int main()
{
    return 0;
}