#include<bits/stdc++.h>
using namespace std;

// int findUniq(vector<int> arr){

//     int ans =0;

//     for(int i=0;i<arr.size();i++){
//         ans = ans ^ arr[i];
//     }
//     return ans;
// }
int main(){
    // int n ;
    // cout<<"Enter the size of array "<<endl;
    // cin>>n;

    // vector<int> arr(n);
    // cout<<"Enter the elements "<<endl;
    // //taking input  
    // for(int i=0;i<arr.size();i++){
    //     cin>>arr[i];
    // }

    // int UniqueElement = findUniq(arr);

    // cout<<"Unique Element is : "<<UniqueElement<<endl;


    // union of 2 arrays

int arr[]={1,3,5,7,9};
int sizea = 5;
int brr[]={2,4,6,8};
int sizeb = 4;


vector<int> ans;
//push all the elemt in arr 
for(int i=0;i<sizea;i++){
    ans.push_back(arr[i]);
}

//push all the elemt in brr 
for(int i=0;i<sizeb;i++){
    ans.push_back(brr[i]);
}

for(int i=0;i<ans.size();i++){
cout<<ans[i]<<" ";
}

    return 0;

}



