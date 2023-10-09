#include<bits/stdc++.h>
using namespace std; 

int main() 
{ 
	int arr[] = {12,19,10,18}; 
    int size = sizeof(arr)/sizeof(arr[0]);

    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    cout<<sum<<endl;
	return 0; 
}
