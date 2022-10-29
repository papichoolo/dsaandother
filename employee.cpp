#include <iostream>
using namespace std;
class employee{
private:
static int eid;
string name;
int age;
public:
void getData(){
   
   cout<<"enter employee name: ";
   cin>>name;
   
   cout<<"enter employee age: ";
   cin>>age;
}
void bruh(){
    eid++;
}
void setdata(){
    cout<<"E.Id; "<<eid<<endl;
    cout<<"employee name: "<<name<<endl;
    cout<<"employee age: "<<age<<endl;
}
};
int employee::eid = 100;
int main(){
    employee bruh;
    bruh.bruh();
    bruh.getData();
    bruh.setdata();

    employee xd;
    xd.bruh();
    xd.getData();
    xd.setdata();

    return 0;

}