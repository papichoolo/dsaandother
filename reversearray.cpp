#include <iostream>
using namespace std;
void reverse(int arr[],int n){
    int s = 0;
    int e = n - 1;
while(s<e){ //if s>e, the array becomes falready reversed, 
            //the loop breaks and not using s<=e because it isnt necessary
    swap(arr[s],arr[e]);
    s+= 1; //changes all the used indices
    e-= 1;
}
}

int main(){
int arr[] = {1,2,3,4,5};
int n = sizeof(arr)/sizeof(int);
//before reverse
for(int i = 0;i<n;i++){
    cout<<arr[i]<<endl;
}
reverse(arr,n);
//after reverse
cout<<"the reversed arr is "<<endl;
for(int i = 0;i<n;i++){
    cout<<arr[i]<<endl;
}

    return 0;
}