#include <iostream>
using namespace std;
 class circle
{
public:
void area(float r){
float a = 3.14* r *r;
cout<<"the area of circle is: "<< a<<endl;
}
void circumference(float r){
float c= 2*3.14*r;
cout<<"the circumference is: "<< c<< endl;
}
};

 int main(){

     circle fun;
     float a = 45.5667;
     fun.area(a);
     fun.circumference(a);
     return 0;
 }
