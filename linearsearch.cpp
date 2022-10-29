#include <iostream>
#include <vector>
using namespace std;
void search(vector <int>& arr,int n, int s){
for(int i = 0;i<n;i++){ 
if(arr[i]==s){
cout<<"the number is "<<arr[i]<<endl;
cout<<"it's index is "<<i<<endl;
}
else{
    cout<<"the number dont exist"<<endl;
}

}

} 

int main(){
vector <int> arr = {1,2,4,5,7,9,3};
int n = sizeof(arr)/sizeof(int);
int s;
cin>>s;
search(arr,n,s);


}