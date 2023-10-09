#include <bits/stdc++.h>
using namespace std;


void replaceSe(char sentence[]){

    int i=0;
    int n = strlen(sentence);
    for(int i=0;i<n;i++){
        if(sentence[i] == ' '){
            sentence [i]= '_';
        }
    }

}

int main(){
    char sentence[100];
    cin.getline(sentence,50);
    replaceSe(sentence);
    cout<<"printing Sentences :"<<sentence<<endl;
}