#include<bits/stdc++.h>
using namespace std;

int main(){


    int arr[8]={10,20,30,40,50,60,70,56};
    int size = 8;

    int start=0;
    int end = size-1;


    while(start <= end){
        // if(start>end)
        //     break;

// if odd case then it will print only start 
        if(start == end){
            cout<<arr[start]<<"";
        }
        else{
            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";
        }
            start++;
            end--;
    }
    return 0;

}