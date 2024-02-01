#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;


void replacespaces(char sentence[]){
    int i =0;
    int n = strlen(sentence);
    for(int i = 0; i<n; i++){
        if(sentence[i] == ' '){
            sentence[i] = '@';
        }
    }
}


int main(){
    char sentence[100];
    cin.getline(sentence, 100);
    replacespaces(sentence);
    cout<<" printing sentence "<<endl<<sentence<<endl;
    return 0;
}