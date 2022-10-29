#include <iostream>
using namespace std;
 class Operator{
public:
int a;

Operator(){
    a = 0;
}
void input(){
    cout<<"Enter  the no.";
    cin>>a;
}
Operator operator + (const Operator &obj){
    Operator temp;
    temp.a= a + obj.a;
    return temp;
}
Operator operator - (const Operator &obj){
    Operator temp;
    temp.a = a - obj.a;
    return temp;
}
Operator operator * (const Operator &obj){
    Operator temp;
    temp.a = a * obj.a;
    return temp;
}
Operator operator / (const Operator &obj){
    Operator temp;
    temp.a =  a / obj.a;
    return temp;
}
void display(){
    cout<<"Result is "<<a<<endl;
}
 };

 int main(){
     Operator a, b, add, sub, multi, div;
     a.input();
     b.input();
     add= a + b;
     multi = a*b;
     div= a/b;
     sub = a- b;
     add.display();
     sub.display();
     multi.display();
     div.display();
     return 0;
 }
