#include <bits/stdc++.h>
using namespace std;

// o(n) tc
// o(1) sc
bool chekpalindrom(char str[]){
    int i=0;
    int n = strlen(str);
    int j=n-1;

    while(i<=j){
        if(str[i]!=str[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
        return true;
    }
}
int main(){
    char str[100]="lol";

    cout<<"palindrom is :"<<chekpalindrom(str);

}