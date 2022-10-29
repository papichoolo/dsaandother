#include <iostream>
#include <vector>
using namespace std;
int largest(vector<int> arr){
    int current = 0;
    int largest = 0;
    for (int i =0;i<arr.size();i++){
        if (arr[i]>current){
            current = arr[i];
        }
    }
largest = current;
return largest;
}
int main(){
    vector<int> arr ={12,3,56,7};
    cout<<largest(arr);

}