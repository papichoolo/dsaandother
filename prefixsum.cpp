#include <iostream>
using namespace std;
int subarrays(int arr[], int n){
int largest= 0;
//how prefix sum would work
int prefix[n] = {0};
prefix[0]= arr[0];
for(int i = 1;i<n;i++){
    prefix[i] = prefix[i-1]+arr[i];
}
//largest sum logic
for(int i = 0;i<n;i++){
    for(int j = i;j<n;j++){
        
        int temp = i > 0? prefix[j]-prefix[i-1]: prefix[j];
        cout<<endl;
        //check max sum
        largest=max(largest,temp);
    }
    
    }
return largest;
}




//prefix sum approach O(n^2)
int main(){
    int arr[]= {10,-20,30,40,50,-60};
    int n = sizeof(arr)/sizeof(int);
    cout<< subarrays(arr,n);
  
}

