#include <iostream>
using namespace std;
void subarrays(int arr[], int n){ //int for sum of subarrays
//int largest= 0;

for(int i = 0;i<n;i++){
    for(int j = i;j<n;j++){
        
        //int temp =0;
        for(int k = i;k<=j;k++){  //k number of elements inside array indices i & j
        cout<<arr[k]<<",";
        //temp += arr[k];
           
        }
        cout<<endl;
        //check max sum
        //largest=max(largest,temp);

    
    }
}
//return largest;
}



int main(){
    int arr[]= {10,-20,30,40,50,-60};
    int n = sizeof(arr)/sizeof(int);
    /*cout<<*/ subarrays(arr,n);
  
}

