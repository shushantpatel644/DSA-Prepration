#include<bits/stdc++.h>
// #include<limits.h>
using namespace std;

int main(){


    // int arr[]={2,4,1,6,8,2,1};
    int arr[]={-2,-4,-1,-6,-8,-2,-11};
    // int arr[]={-2,-4,-1,-6,0,-2,0};
    // int arr[]={-2,4,-1,-16,-8,0,0};
    int size = 7;
    // int maxNum=0;
    int maxNum=INT_MIN;


    //for finding the maium no

    for(int i=0;i<size;i++){
        if(arr[i]>maxNum)
        //found a number greater than maxi , update then
        maxNum=arr[i];
    }
    cout<<"Maxium Number is : "<<maxNum<<endl;
    
    // for finding the min number 

    // int minNum=INT_MAX;
    // // sort(arr.begin(),arr.end());
    // // return size-1;

    // for(int i=0;i<size;i++){
    //     if(arr[i]<minNum)
    //     //found a numebr less than min, udate next
    //     minNum=arr[i];
    // }
    // cout<<"Minium Number is : "<<minNum<<endl;
    return 0;
}