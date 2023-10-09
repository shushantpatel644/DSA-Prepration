#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr{1,3,5,7,9};
    int sum = 12;

    // print all pair 
    //outer loop will travrse for each elelemnt 
    //  for(int i=0;i<arr.size();i++){
    //     int element = arr[i];
    // for every elemnt, will traverse on aage wale elements
    //     for(int j=i+1;j<arr.size();j++){
    //         cout<< "(" << element <<"," <<arr[j]<<")"<<endl;
    //     }
    //  }

     for(int i=0;i<arr.size();i++){
        //int element = arr[i];
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]== sum){
                cout<<"Pair found "<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
            }
        }
     }


}


//triplet sum
    //  for(int i=0;i<arr.size();i++){
        //int element = arr[i];
        // for(int j=i+1;j<arr.size();j++){
// for(int k=j+1;k<arr.size();k++){
//             if(arr[i]+arr[j] + arr[k]== sum){
//                 cout<<"Pair found "<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
//             }