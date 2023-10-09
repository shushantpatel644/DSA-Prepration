// #include<bits/stdc++.h>

#include <bits/stdc++.h>
using namespace std;


void revserse(char name[]){
    int i=0;
    int n = strlen(name);
    int j=n-1;

    while(i<=j){
        swap(name[i],name[j]);
        i++;
        j--;
    }
}

int main(){
    char name[100];
    cin>>name;

    cout<<"Initally :"<<name<<endl;
    revserse(name);
    cout<<"After reversal prcoess :"<<name<<endl;
}