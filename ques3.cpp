#include <iostream>
using namespace std;
class Areas {
public: 
int length;int breadth;int side; int radius;
Areas(){
    cout<<"Enter Length, Bredth, Side and Radius"<<endl;
    cin>>length>>breadth>>side>>radius;
}
void React(){
    int AreaR;
    AreaR= length * breadth;
    cout<<"area of rect. "<< AreaR;
}
void Sq(){
    int AreaS;
    AreaS= side * side;
    cout<<"area of square "<< AreaS;
}
void Circ(){
    float AreaC;
    AreaC = 3.14 * radius *radius;
    cout<<"area of circle "<< AreaC;
}
};
int main(){
    Areas b;
    b.React();
    b.Sq();
    b.Circ();
    return 0;
}