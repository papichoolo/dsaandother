#include <iostream>
using namespace std;
class complex{
    public: int real, imag;
   complex(int r= 0, int i=0){
       real = r;
       imag = i;
   } 
   complex operator - (complex const &obj){
     complex res;
     res.real = real - obj.real;
     res.imag = imag - obj.imag;
     return res;
   }
   void result(){
       cout<<real<<" +"<<imag<<"i"<<endl;
   }
};
int main(){
    complex c1(7,4), c2(5,4);
    complex c3 = c1 - c2;
    c3.result();
}