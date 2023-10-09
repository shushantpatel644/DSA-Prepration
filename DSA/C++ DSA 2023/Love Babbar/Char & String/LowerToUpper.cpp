#include <bits/stdc++.h>
using namespace std;


void revtoUpper(char arr[]){
    int n = strlen(arr);

    for(int i=0;i<n;i++){
        if(arr[i]>='A' && arr[i] <= 'Z' && arr[i]!= ' ')
        arr[i]=arr[i]-'a'+'A';
        // arr[i]=arr[i]-'A'+'a';
    }
}
int main(){
    char arr[100]= "shushant patel";
    revtoUpper(arr);
    cout<<" Convert :"<<arr<<endl;
    return 0;
}