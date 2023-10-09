#include<bits/stdc++.h>
using namespace std; 

int main() 
{ 
	int arr[] = {12,-19,10,18}; 
    // int size = sizeof(arr)/sizeof(arr[0]);

    int max=arr[0];

    for(int i=1;i<4;i++){
        if(arr[i]<max)
        {
           max=arr[i];
        }
        cout<<max<<endl;
        return 0;
        }
}
