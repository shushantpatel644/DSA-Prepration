// C++ Program to Illustrate How to Traverse an Array 
// #include <iostream> 
#include<bits/stdc++.h>
using namespace std; 

int main() 
{ 
 int array[10]={};

	for (int i = 0; i < 10; i++) { 
        // cout<<"The aaray is: "<<array[i]<<endl;
	} 

    // for each loop 
    for(int element:array){
        // cout<<element<<endl;
    }

    // while loop

    int index =0;
    while(index<10){
        // cout<<"The total element is "<<array[index]<<endl;
        index++;
    }

    //taking input from user

    char vowel[5];

    for(int i=0;i<5;i++){
        // cin>>vowel[i];
    }
 
    for(int i=0;i<5;i++){
        // cout<<vowel[i]<<" ";
    }

    for(char &element:vowel){
        cin>>element;
    }

    for(int i=0;i<5;i++){
        cout<<vowel[i]<<" ";
    }
	return 0; 
}
