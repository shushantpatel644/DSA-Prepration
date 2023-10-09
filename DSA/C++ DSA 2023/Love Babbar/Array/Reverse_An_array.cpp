#include<bits/stdc++.h>
using namespace std;

int main(){


    int arr[8]={1,2,3,4,5,6,7};
    int size = 7;

    int start=0;
    int end = size-1;


    while(start <= end){
    //step 1 swap
    int temp=start;
    start=end;
    end=temp;
    // swap(arr[start],arr[end]);
    //step 2
    // start++;
    // step 3
    // end--;}
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" "<<endl;
    }

    return 0;
}