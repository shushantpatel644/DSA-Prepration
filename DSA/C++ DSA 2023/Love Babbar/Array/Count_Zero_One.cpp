#include<bits/stdc++.h>
using namespace std;

int main(){


    int arr[]={1,0,1,0,0,1,1,1,0,1,1,1,0,0,0};
    int size = 15;
    int numberZero = 0;
    int numOne=0;


    for(int i=0;i<size;i++){
        //if ones found increment numZero
        if(arr[i]==0){
            numberZero++;
        }
        //if ones found increment numOne
        if(arr[i]==1){
            numOne++;
        }
    }
    cout<< "Numbers of zeros"<<numberZero<<endl;
    cout<< "Numbers of ones"<<numOne<<endl;

    return 0;
}