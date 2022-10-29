#include <iostream>
using namespace std;
int bins(int arr[],int n, int key){
int s = 0; //first index
int e = n-1; //last index

while(s<=e){   // this the condition of the key not being in array
    int mid = s+e/2;  // middle index of the array
    if(arr[mid]==key){  
        return mid; //returning array
    }
    else if(arr[mid]<key){  // shifting the search to the right of the middle index
        s = mid + 1;
    }
    else{    // shifting the search to the left of the middle index
        e = mid - 1;
    }



}
return -1;
}




int main(){
int arr[]= {10,20,30,40,50,60,70,80,90,100};
int n = sizeof(arr)/sizeof(int);
int key;
cout<<"enter the value you want ";
cin>>key;
int index = bins(arr,n,key);
if(index!=-1){
    cout<< "the returning index is "<< index<<endl;

}
else{

    cout<<"the given key is NOT found."<< endl;
}
return 0;

}


    