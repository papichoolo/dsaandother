#include <iostream>
using namespace std;


int main(){
    char bruh[1000];
    cin.getline(bruh,1000);
    int x=0;
        int y=0;
    for(int i=0;bruh[i]!='\0';i++){
        
        //switch case for compass used here
        switch (bruh[i])
        {
        case 'N': y++;
        break;
        case 'S': y--;
        break;
        case 'E': x++;
        break;
        case 'W': x--; 
        break;
        
       
        }    
    }
        //the shortest path
        if(x>=0 && y>=0){
        while(y--){    //post decrement
            cout<<"N";
        }
        while(x--){
            cout<<"E";
        }
    }
}