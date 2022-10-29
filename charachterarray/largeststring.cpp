#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.get();
    //consumes a newline so that the getline takes n no of newlines instead of n-1 newlines
    char sentence[1000];
    char largest[1000];
    int length = strlen(sentence);
     int largestlength=0;
     while(n--){
    cin.getline(sentence,1000);
    //cout<<sentence<<endl;
     
     if(length>largestlength){
        largestlength=length;
        strcpy(largest,sentence);
     }
     }
     cout<<"largst string: "<<largest<<endl;
}