#include<iostream>
using namespace std;
 
class Employee{
    public:
    int id;
    string name;
Employee(){
cout<<"enter id "<<endl;
cin>>id;
cout<<"enter name "<<endl;
cin>>name;
}
void show(){
    cout<< "Name: "<< name<<endl;
    cout<<"ID: "<<id<<endl; 
}
};
int main(){
    
  int n, i;
  cout << "Enter Number of Employees - ";
  cin >> n;
   Employee emp[n];
  // Accessing the function
  for(i = 0; i < n; i++)
    emp[i];
   
  cout << "Employee Data - " << endl;
   
  // Accessing the function
  for(i = 0; i < n; i++)
    emp[i].show();
}