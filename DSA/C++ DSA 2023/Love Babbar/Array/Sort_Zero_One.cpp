#include<bits/stdc++.h>
using namespace std;
 
int main(){ 
    vector<int>arr{0,0,1,1,1,1,1,0,0};
    int start=0;
    int end = arr.size()-1;
    int i=0;

    while(start != end){
        if(arr[i] == 0){
            swap(arr[start],arr[i]);
            start++;
            i++;
        }
        else{
            swap(arr[i],arr[end]);
            end--;
        }
    }
    for(auto br : arr){
        cout<<br <<" ";
    }
} 

// left rotate an array by 1 elemt
// majority element in an array
// buy & sell stock -> level 1