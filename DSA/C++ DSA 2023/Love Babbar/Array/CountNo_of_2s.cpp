#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[]={1,0,1,0,0,1,1,1,0,1,1,2,0,0,2};
    int size = 15;

    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==2){
            count++;
        }
    }
cout<<"Total Counts of  2 Numbers is : "<<count<<endl;
    return 0;
}