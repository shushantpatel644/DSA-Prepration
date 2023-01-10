// using 2 array
//  void merege(A[], B[], int m, int n)
//  {
//      int i, j, k;
//      i = j = k = 0;
//      while (i < m && i < n)
//      {
//          if (A[i] < B[j])
//          {
//              C[k] = A[i] i++;
//              k++;
//          }
//          // else
//          {
//              C[k] = B[j];
//              k++;
//              j++;
//          }
//      }
//      //copy all remaning elemet from a to c
//      while (i < m)
//      {
//          C[k] = A[i];
//          k++;
//          i++;
//      }
//      //from b to c
//      while (j < n)
//      {
//          C[k] = B[j];
//          k++;
//          j++;
//      }
//  }

// using single array

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
    cout << endl;
}
void merege(A[], int mid, int low, int high)
{
    int i, j, k;
    int B[high + 1];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k++] = A[i++]
            // i++;
            // k++;
        }
        else
        {
            B[k] = A[j];
            k++;
            j++;
        }
    }
    // copy all remaning elemet from a to c
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    // from b to c
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
}

void meregeSort(Int A[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        meregeSort(A, low, mid);
        meregeSort(A, mid + 1, high);
        meregeSort(A, mid, low, high);
    }
}
int main()
{
    int A[] = {8, 3, 2, 1, 9, 5, 6};
    int n = 7;
    printArray(A, n);
    mergeSort();
    printArray(A, n);
    return 0;
}
// recursive merege sort

// void ms(int A[], int l, int h)
// {
//     if (l < h)
//     {
//         mid = (l + h) / 2;
//         ms(A, l, mid);
//         ms(A, mid + 1, h);
//         Merege(A, l, mid, h);
//     }
// }

/* void inorder(TreeNode *root , vector<int> &inorderVal){
        if(root == NULL)
            return ;

        inorder(root->left , inorderVal);
        inorderVal.push_back(root->val);
        inorder(root->right , inorderVal);

    }

    vector<int> mergeArrays(vector<int> &a , vector<int> &b){
        vector<int> ans(a.size() + b.size());

        int i = 0 , j = 0 , k = 0;

        while(i < a.size() && j < b.size()){
            if(a[i] < b[j]){
                ans[k++] = a[i];
                i++;
            }
            else{
                ans[k++] = b[j];
                j++;
            }
        }

        while(i < a.size()){
            ans[k++] = a[i];
            i++;
        }

        while(j < b.size()){
            ans[k++] = b[j];
            j++;
        }
        return ans;
    }

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> in1 , in2;
        inorder(root1 , in1);
        inorder(root2 , in2);

        //merge 2 sorted arrays
        vector<int> ans = mergeArrays(in1 , in2);
        return ans;
    }
};*/

/*
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

/*
class Solution {
public:
    void inorderTraversal(TreeNode* root,vector<int> &val){

        if(root==NULL)
            return;

        inorderTraversal(root->left,val);
        val.push_back(root->val);
        inorderTraversal(root->right,val);
    }
    vector<int> mergedTree(vector<int> &vec1,vector<int> &vec2){
        vector<int>ans(vec1.size()+vec2.size());

        int i=0,j=0,k=0;

        while(i < vec1.size() && j < vec2.size()){
            if(vec1[i] < vec2[j]){
                ans[k++] = vec1[i];
                // k++;
                i++;
            }
            else
                ans[k++] = vec2[j];{
            // k++;
            j++;
        }
        }

        while(i < vec1.size()){
            ans[k++] = vec1[i];
            // k++;
            i++;
        }

        while(j < vec2.size()){
            ans[k++] = vec2[j];
            // k++;
            j++;
        }
        return ans;
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> tree1,tree2;
        inorderTraversal(root1,tree1);
        inorderTraversal(root2,tree2);

        vector<int> ans = mergedTree(tree1,tree2);
        return ans;
    }
};
*/

/*
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    void inorderTraversal(TreeNode *root, vector<int> &val)
    {

        if (root == NULL)
            return;

        inorderTraversal(root->left, val);
        val.push_back(root->val);
        inorderTraversal(root->right, val);
    }
    vector<int> mergedTree(vector<int> &vec1, vector<int> &vec2)
    {
        vector<int> ans(vec1.size() + vec2.size());

        int i = 0, j = 0, k = 0;

        while (i < vec1.size() && j < vec2.size())
        {
            if (vec1[i] < vec2[j])
            {
                ans[k++] = vec1[i];
                // k++;
                i++;
            }
            else
                ans[k++] = vec2[j];
            {
                // k++;
                j++;
            }
        }

        while (i < vec1.size())
        {
            ans[k++] = vec1[i];
            // k++;
            i++;
        }

        while (j < vec2.size())
        {
            ans[k++] = vec2[j];
            // k++;
            j++;
        }
        return ans;
    }
    vector<int> getAllElements(TreeNode *root1, TreeNode *root2)
    {
        vector<int> tree1, tree2;
        inorderTraversal(root1, tree1);
        inorderTraversal(root2, tree2);

        vector<int> ans = mergedTree(tree1, tree2);
        return ans;
    }
};

* /