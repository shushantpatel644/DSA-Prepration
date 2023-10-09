// #include<bits/stdc++.h>
// using namespace std;

// bool find(int arr[],int size,int key){

//     for(int i=0;i<size;i++)
//         if(arr[i]==key)
//             return true;
//           return false;
//     }
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8};
//     int size = 8;
//     bool flag =0;
    //0 -> not found
    //1 -> found

    // cout<<"enter the key to find "<<endl;
    // int key ;
    // cin>>key;

    // if(find(arr,size,key)){
    //     cout<<"found"<<endl;
    // }
    // else{
    //     cout<<"not found"<<endl;
    // }
    // return 0;
// }


// without main funtion

#include<bits/stdc++.h>
using namespace std;

int main(){ int arr[]={1,2,3,4,5,6,7,8};
    int size = 8;
    bool flag =0;
    int key = 10;
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            flag =1;
    }
    }
    if(flag)
        cout<<"found"<<endl;
    else
    cout<<"not found"<<endl;
}