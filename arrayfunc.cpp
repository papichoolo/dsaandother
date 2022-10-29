#include <iostream>
using namespace std;
 
void printarray(int *arr,int n){  // calling int n from main() because we cant use sizeof() method in this case, since only pointer variable of array is being used instead of the actual array 
cout<<"in func size "<<sizeof(arr)<<endl;
arr[0] = 100;
for(int i= 0;i<n;i++){
    cout<<arr[i]<<endl;
}
}

int main(){

int arr[] = {1,2,3,4,5,6};
int n= sizeof(arr)/sizeof(int); // making n = 6 for this case
printarray(arr,n);
cout<<"in main size "<<sizeof(arr)<<endl;
for(int i= 0;i<n;i++){
    cout<<arr[i]<<endl;
}

  return 0;  
}