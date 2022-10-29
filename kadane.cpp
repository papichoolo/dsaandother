#include <iostream>
using namespace std;
int subarrays(int arr[], int n){ 
int cs =0;
int ms =0;
for(int i =0;i<n;i++){
    cs += arr[i];
    if(cs<0){
        cs=0;
    }
    if(cs>ms){
        ms = cs;
    }
}
return ms;
}


//kadane's algorithm with O(N)
int main(){
    int arr[]= {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    cout<<subarrays(arr,n);
  return 0;
}

 