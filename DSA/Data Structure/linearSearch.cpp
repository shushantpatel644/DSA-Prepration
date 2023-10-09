#include<bits/stdc++.h>
using namespace std; 

int main() 
{ 
	int arr[] = {12,19,10,18}; 
    int key =1;

    int ans = -1;

    for(int i=0;i<4;i++){
        if(arr[i]==key){
            ans=i;
            break;
            
        }
    }
    cout<<ans<<endl;
	return -1; 
}
